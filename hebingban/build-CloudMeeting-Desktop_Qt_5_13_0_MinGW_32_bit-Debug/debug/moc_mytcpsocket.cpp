/****************************************************************************
** Meta object code from reading C++ file 'mytcpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../kehu/mytcpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTcpSocket_t {
    QByteArrayData data[26];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpSocket_t qt_meta_stringdata_MyTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyTcpSocket"
QT_MOC_LITERAL(1, 12, 12), // "loginSuccess"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "role"
QT_MOC_LITERAL(4, 31, 11), // "loginFailed"
QT_MOC_LITERAL(5, 43, 8), // "errorMsg"
QT_MOC_LITERAL(6, 52, 15), // "registerSuccess"
QT_MOC_LITERAL(7, 68, 3), // "msg"
QT_MOC_LITERAL(8, 72, 14), // "registerFailed"
QT_MOC_LITERAL(9, 87, 11), // "socketerror"
QT_MOC_LITERAL(10, 99, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 128, 12), // "sendTextOver"
QT_MOC_LITERAL(12, 141, 11), // "reconnected"
QT_MOC_LITERAL(13, 153, 13), // "startSendLoop"
QT_MOC_LITERAL(14, 167, 8), // "sendLoop"
QT_MOC_LITERAL(15, 176, 13), // "connectServer"
QT_MOC_LITERAL(16, 190, 23), // "QIODevice::OpenModeFlag"
QT_MOC_LITERAL(17, 214, 8), // "sendData"
QT_MOC_LITERAL(18, 223, 5), // "MESG*"
QT_MOC_LITERAL(19, 229, 11), // "closeSocket"
QT_MOC_LITERAL(20, 241, 13), // "sendHeartbeat"
QT_MOC_LITERAL(21, 255, 15), // "handleReconnect"
QT_MOC_LITERAL(22, 271, 14), // "recvFromSocket"
QT_MOC_LITERAL(23, 286, 15), // "stopImmediately"
QT_MOC_LITERAL(24, 302, 11), // "errorDetect"
QT_MOC_LITERAL(25, 314, 5) // "error"

    },
    "MyTcpSocket\0loginSuccess\0\0role\0"
    "loginFailed\0errorMsg\0registerSuccess\0"
    "msg\0registerFailed\0socketerror\0"
    "QAbstractSocket::SocketError\0sendTextOver\0"
    "reconnected\0startSendLoop\0sendLoop\0"
    "connectServer\0QIODevice::OpenModeFlag\0"
    "sendData\0MESG*\0closeSocket\0sendHeartbeat\0"
    "handleReconnect\0recvFromSocket\0"
    "stopImmediately\0errorDetect\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,
       9,    1,  111,    2, 0x06 /* Public */,
      11,    0,  114,    2, 0x06 /* Public */,
      12,    0,  115,    2, 0x06 /* Public */,
      13,    0,  116,    2, 0x06 /* Public */,
      14,    0,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    3,  118,    2, 0x08 /* Private */,
      17,    1,  125,    2, 0x08 /* Private */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,
      21,    0,  130,    2, 0x08 /* Private */,
      22,    0,  131,    2, 0x0a /* Public */,
      23,    0,  132,    2, 0x0a /* Public */,
      24,    1,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 16,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   25,

       0        // eod
};

void MyTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->loginFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->registerSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->registerFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->socketerror((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->sendTextOver(); break;
        case 6: _t->reconnected(); break;
        case 7: _t->startSendLoop(); break;
        case 8: _t->sendLoop(); break;
        case 9: { bool _r = _t->connectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenModeFlag(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->sendData((*reinterpret_cast< MESG*(*)>(_a[1]))); break;
        case 11: _t->closeSocket(); break;
        case 12: _t->sendHeartbeat(); break;
        case 13: _t->handleReconnect(); break;
        case 14: _t->recvFromSocket(); break;
        case 15: _t->stopImmediately(); break;
        case 16: _t->errorDetect((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MESG* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyTcpSocket::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::loginSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::loginFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::registerSuccess)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::registerFailed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::socketerror)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::sendTextOver)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::reconnected)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::startSendLoop)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::sendLoop)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTcpSocket::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_MyTcpSocket.data,
    qt_meta_data_MyTcpSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int MyTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MyTcpSocket::loginSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTcpSocket::loginFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyTcpSocket::registerSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyTcpSocket::registerFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyTcpSocket::socketerror(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyTcpSocket::sendTextOver()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MyTcpSocket::reconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MyTcpSocket::startSendLoop()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MyTcpSocket::sendLoop()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
