#include "unpthread.h"
#include <stdlib.h>
#include "unp.h"
#include "netheader.h"
#include "msg.h"
#include "auth.h"
#include <mysql/mysql.h>

pthread_mutex_t mlock = PTHREAD_MUTEX_INITIALIZER; // accept lock
extern socklen_t addrlen;
extern int listenfd;
extern int nprocesses;
extern Room *room;

void* thread_main(void *arg)
{
    void dowithuser(int connfd);
    int i = *(int *)arg;
    free(arg); //free
    int connfd;
    Pthread_detach(pthread_self()); //detach child thread

//    printf("thread %d starting\n", i);

    SA *cliaddr;
    socklen_t clilen;
    cliaddr = (SA *)Calloc(1, addrlen);
    char buf[MAXSOCKADDR];
    for(;;)
    {
        clilen = addrlen;
        //lock accept
        Pthread_mutex_lock(&mlock);
        connfd = Accept(listenfd, cliaddr, &clilen);
        //unlock accept
        Pthread_mutex_unlock(&mlock);

        printf("connection from %s\n", Sock_ntop(buf, MAXSOCKADDR, cliaddr, clilen));

        dowithuser(connfd); // process user


    }
    return NULL;
}


/*
 *
 *read data from client
 *
 */

void dowithuser(int connfd)
{
    void writetofd(int fd, MSG msg);

    char head[15]  = {0};
    //read head
    while(1)
    {
        ssize_t ret = Readn(connfd, head, 11);
        if(ret <= 0)
        {
            close(connfd); //close
            printf("%d close\n", connfd);
            return;
        }
        else if(ret < 11)
        {
            printf("data len too short\n");
        }
        else if(head[0] != '$')
        {
            printf("a data format error\n");
        }
        else
        {
            //solve datatype
            MSG_TYPE msgtype;
            memcpy(&msgtype, head + 1, 2);
            msgtype = (MSG_TYPE)ntohs(msgtype);

            //solve ip
            uint32_t ip;
            memcpy(&ip, head + 3, 4);
            ip = ntohl(ip);

            //solve datasize
            uint32_t datasize;
            memcpy(&datasize, head + 7, 4);
            datasize = ntohl(datasize);

    //        printf("msg type %d\n", msgtype);

            if(msgtype == CREATE_MEETING)
            {
                char tail;
                Readn(connfd, &tail, 1);
                //read data from client
                if(datasize == 0 && tail == '#')
                {
                    char *c = (char *)&ip;
                    printf("create meeting  ip: %d.%d.%d.%d\n", (u_char)c[3], (u_char)c[2], (u_char)c[1], (u_char)c[0]);
                    if(room->navail <=0) // no room
                    {
                        MSG msg;
                        memset(&msg, 0, sizeof(msg));
                        msg.msgType = CREATE_MEETING_RESPONSE;
                        int roomNo = 0;
                        msg.ptr = (char *) malloc(sizeof(int));
                        memcpy(msg.ptr, &roomNo, sizeof(int));
                        msg.len = sizeof(roomNo);
                        writetofd(connfd, msg);
                    }
                    else
                    {
                        int i;
                        //find room empty
                        Pthread_mutex_lock(&room->lock);

                        for(i = 0; i < nprocesses; i++)
                        {
                            if(room->pptr[i].child_status == 0) break;
                        }
                        if(i == nprocesses) //no room empty
                        {
                            MSG msg;
                            memset(&msg, 0, sizeof(msg));
                            msg.msgType = CREATE_MEETING_RESPONSE;
                            int roomNo = 0;
                            msg.ptr = (char *) malloc(sizeof(int));
                            memcpy(msg.ptr, &roomNo, sizeof(int));
                            msg.len = sizeof(roomNo);
                            writetofd(connfd, msg);
                        }
                        else
                        {
                            char cmd = 'C';
                            if(write_fd(room->pptr[i].child_pipefd, &cmd, 1, connfd) < 0)
                            {
                                printf("write fd error");
                            }
                            else
                            {
                                close(connfd);
                                printf("room %d empty\n", room->pptr[i].child_pid);
                                room->pptr[i].child_status = 1; // occupy
                                room->navail--;
                                room->pptr[i].total++;
                                Pthread_mutex_unlock(&room->lock);
                                return;
                            }
                        }
                        Pthread_mutex_unlock(&room->lock);

                    }
                }
                else
                {
                    printf("b data format error\n");
                }
            }
            else if(msgtype == JOIN_MEETING)
            {
                //read msgsize
                uint32_t msgsize, roomno;
                memcpy(&msgsize, head + 7, 4);
                msgsize = ntohl(msgsize);
                //read data + #
                int r =  Readn(connfd, head, msgsize + 1 );
                if(r < msgsize + 1)
                {
                    printf("data too short\n");
                }
                else
                {
                    if(head[msgsize] == '#')
                    {
                        memcpy(&roomno, head, msgsize);
                        roomno = ntohl(roomno);
    //                    printf("room : %d\n", roomno);
                        //find room no
                        bool ok = false;
                        int i;
                        for(i = 0; i < nprocesses; i++)
                        {
                            if(room->pptr[i].child_pid == roomno && room->pptr[i].child_status == 1)
                            {
                                ok = true; //find room
                                break;
                            }
                        }

                        MSG msg;
                        memset(&msg, 0, sizeof(msg));
                        msg.msgType = JOIN_MEETING_RESPONSE;
                        msg.len = sizeof(uint32_t);
                        if(ok)
                        {
                            if(room->pptr[i].total >= 1024)
                            {
                                msg.ptr = (char *)malloc(msg.len);
                                uint32_t full = -1;
                                memcpy(msg.ptr, &full, sizeof(uint32_t));
                                writetofd(connfd, msg);
                            }
                            else
                            {
                                Pthread_mutex_lock(&room->lock);

                                char cmd = 'J';
    //                            printf("i  =  %d\n", i);
                                if(write_fd(room->pptr[i].child_pipefd, &cmd, 1, connfd) < 0)
                                {
                                    err_msg("write fd:");
                                }
                                else
                                {

                                    msg.ptr = (char *)malloc(msg.len);
                                    memcpy(msg.ptr, &roomno, sizeof(uint32_t));
                                    writetofd(connfd, msg);
                                    room->pptr[i].total++;// add 1
                                    Pthread_mutex_unlock(&room->lock);
                                    close(connfd);
                                    return;
                                }
                                Pthread_mutex_unlock(&room->lock);
                            }
                        }
                        else
                        {
                            msg.ptr = (char *)malloc(msg.len);
                            uint32_t fail = 0;
                            memcpy(msg.ptr, &fail, sizeof(uint32_t));
                            writetofd(connfd, msg);
                        }
                    }
                    else
                    {
                        printf("format error\n");
                    }
                }
            }
               /*————————————————————登录注册相关代码，勿动——————————————————————*/
else if (msgtype == AUTH) {  // 处理登录请求
    printf("Auth request from IP: %u.%u.%u.%u\n", 
           (ip >> 24) & 0xFF, (ip >> 16) & 0xFF,
           (ip >> 8) & 0xFF, ip & 0xFF);
    
    // 添加安全校验 - 使用合理的最大值
    if (datasize <= 0 || datasize > 1024) { // 使用1024作为合理最大值
        printf("Invalid auth datasize: %u\n", datasize);
        continue;
    }
    
    char *data = (char*)malloc(datasize + 1);
    if (!data) {
        perror("malloc failed");
        continue;
    }
    
    // 先读数据再读结束符
    ssize_t n = Readn(connfd, data, datasize);
    if (n != datasize) {
        free(data);
        printf("Auth data read error: %ld/%u\n", (long)n, datasize);
        continue;
    }
    data[datasize] = '\0';
    
    // 读取结束符
    char tail;
    if (Readn(connfd, &tail, 1) != 1 || tail != '#') {
        free(data);
        printf("AUTH missing end tag!\n");
        continue;
    }
    
    // 解析和处理数据
    char account[64], password[64], role[16];
    int parsed = sscanf(data, "%63[^|]|%63[^|]|%15s", account, password, role);
    if (parsed != 3) {
        printf("AUTH data format error: parsed %d fields\n", parsed);
        free(data);
        continue;
    }
    
    MSG resp;
    memset(&resp, 0, sizeof(resp)); // 正确初始化MSG结构体
    
    AuthResult auth = authenticateUser(account, password, role);
    if (auth.ok) {
        resp.msgType = AUTH_OK;
        resp.ptr = strdup(auth.role.c_str());
        resp.len = strlen(resp.ptr);
    } else {
        resp.msgType = AUTH_FAILED;
        resp.ptr = strdup("账号/密码/角色不匹配");
        resp.len = strlen(resp.ptr);
    }
    writetofd(connfd, resp);
    free(data);
}
/*————————————————————登录注册相关代码，勿动——————————————————————*/
//注册
    else if (msgtype == AUTH_REGISTER) {  // 处理注册请求
    printf("Register request from IP: %u.%u.%u.%u\n", 
           (ip >> 24) & 0xFF, (ip >> 16) & 0xFF,
           (ip >> 8) & 0xFF, ip & 0xFF);
                // 正确读取完整数据包
    char *data = (char*)malloc(datasize + 1);
    ssize_t n = Readn(connfd, data, datasize);  // 读取数据部分
    if (n != datasize) {
        free(data);
        printf("read data error\n");
        continue;
    }
    data[datasize] = '\0';
    
    // 读取结束符
    char tail;
    if (Readn(connfd, &tail, 1) != 1 || tail != '#') {
        free(data);
        printf("data format error: missing end tag\n");
        continue;
    }

    // 解析数据："username|password|email|role"
    char username[64], password[64], email[64], role[16];
    sscanf(data, "%63[^|]|%63[^|]|%63[^|]|%15s", username, password, email, role);
    
    // ... 后续处理 ...

            //MYSQL *conn = db_init();
            MSG resp;
            memset(&resp, 0, sizeof(resp));
            resp.msgType = AUTH_REGISTER_FAILED;
            AuthResult regi = registerUser(username, password, email, "", role);
            printf("Register request: username=%s, email=%s, role=%s\n", username, email, role);
            if(regi.ok == true){
                printf("注册成功: %s\n", username);
                resp.msgType =AUTH_REGISTER_OK;
                resp.ptr = strdup("注册成功,待管理员审核");
            }
            else{
                printf("注册失败");
                resp.ptr = strdup("注册失败");
                resp.len = strlen(resp.ptr);
            }
            resp.len = strlen(resp.ptr);
/*resp.len = strlen(resp.ptr);
            if (conn) {
                if (db_register_user(conn, username, password, email, role)) {
                    resp.msgType = AUTH_REGISTER_OK;
                    resp.ptr = strdup("注册成功,待管理员审核");
                } else {
                    resp.ptr = strdup(mysql_error(conn)); // 返回数据库错误
                }
                resp.len = strlen(resp.ptr);
                mysql_close(conn);
            } else {
                resp.ptr = strdup("数据库连接失败");
                resp.len = strlen(resp.ptr);
            }
*/
            writetofd(connfd, resp);
            free(data);
            printf("success");
    }
    /*————————————————————登录注册相关代码，勿动——————————————————————*/
      
    }
}
}

void writetofd(int fd, MSG msg)
{
    // 计算所需缓冲区大小：头(11) + 数据 + 尾(1)
    size_t total_size = 11 + msg.len + 1;
    char *buf = (char *) malloc(total_size);
    if (!buf) {
        perror("malloc failed");
        return;
    }
    memset(buf, 0, total_size);
    
    int bytestowrite = 0;
    buf[bytestowrite++] = '$';

    uint16_t type = msg.msgType;
    type = htons(type);
    memcpy(buf + bytestowrite, &type, sizeof(uint16_t));

    bytestowrite += 2;//skip type

    bytestowrite += 4; //skip ip

    uint32_t size = msg.len;
    size = htonl(size);
    memcpy(buf + bytestowrite, &size, sizeof(uint32_t));
    bytestowrite += 4;

    memcpy(buf + bytestowrite, msg.ptr, msg.len);
    bytestowrite += msg.len;

    buf[bytestowrite++] = '#';

    if(writen(fd, buf, bytestowrite) < bytestowrite)
    {
        printf("write fail\n");
    }

    if(msg.ptr)
    {
        free(msg.ptr);
        msg.ptr = NULL;
    }
    free(buf);
}
