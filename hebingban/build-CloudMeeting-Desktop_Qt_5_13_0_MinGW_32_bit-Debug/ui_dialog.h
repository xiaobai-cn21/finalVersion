/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QLabel *label_title;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label1;
    QLabel *label2;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *go_register;
    QPushButton *foget_password;
    QPushButton *login_button;
    QLabel *label_status;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *factory;
    QRadioButton *expert;
    QRadioButton *admin;
    QWidget *stackedWidgetPage2;
    QLabel *label_title_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label5;
    QLabel *label4;
    QLineEdit *confirm;
    QLabel *username_2;
    QLineEdit *username2;
    QLineEdit *address;
    QLabel *label3;
    QLineEdit *password2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *role_2;
    QRadioButton *expert2;
    QRadioButton *factory2;
    QPushButton *register_button;
    QPushButton *back_login;
    QLabel *label_status_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        label_title = new QLabel(stackedWidgetPage1);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(20, 10, 721, 61));
        gridLayoutWidget = new QWidget(stackedWidgetPage1);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 80, 721, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(gridLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label1, 6, 0, 1, 1, Qt::AlignHCenter);

        label2 = new QLabel(gridLayoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setEnabled(true);
        sizePolicy.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy);
        label2->setLayoutDirection(Qt::LeftToRight);
        label2->setLineWidth(5);
        label2->setMargin(5);

        gridLayout->addWidget(label2, 1, 0, 1, 1);

        username = new QLineEdit(gridLayoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy1);
        username->setMaxLength(32726);
        username->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(username, 1, 1, 1, 1);

        password = new QLineEdit(gridLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        sizePolicy1.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy1);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 6, 1, 1, 1);

        go_register = new QPushButton(stackedWidgetPage1);
        go_register->setObjectName(QString::fromUtf8("go_register"));
        go_register->setGeometry(QRect(420, 470, 321, 61));
        foget_password = new QPushButton(stackedWidgetPage1);
        foget_password->setObjectName(QString::fromUtf8("foget_password"));
        foget_password->setGeometry(QRect(10, 470, 221, 61));
        login_button = new QPushButton(stackedWidgetPage1);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setGeometry(QRect(250, 470, 141, 61));
        label_status = new QLabel(stackedWidgetPage1);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(150, 45, 471, 41));
        horizontalLayoutWidget = new QWidget(stackedWidgetPage1);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 369, 721, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        factory = new QRadioButton(horizontalLayoutWidget);
        factory->setObjectName(QString::fromUtf8("factory"));
        sizePolicy1.setHeightForWidth(factory->sizePolicy().hasHeightForWidth());
        factory->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(factory);

        expert = new QRadioButton(horizontalLayoutWidget);
        expert->setObjectName(QString::fromUtf8("expert"));
        sizePolicy1.setHeightForWidth(expert->sizePolicy().hasHeightForWidth());
        expert->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(expert);

        admin = new QRadioButton(horizontalLayoutWidget);
        admin->setObjectName(QString::fromUtf8("admin"));
        sizePolicy1.setHeightForWidth(admin->sizePolicy().hasHeightForWidth());
        admin->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(admin);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        label_title_2 = new QLabel(stackedWidgetPage2);
        label_title_2->setObjectName(QString::fromUtf8("label_title_2"));
        label_title_2->setGeometry(QRect(10, 4, 761, 41));
        gridLayoutWidget_3 = new QWidget(stackedWidgetPage2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 60, 771, 281));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label5 = new QLabel(gridLayoutWidget_3);
        label5->setObjectName(QString::fromUtf8("label5"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label5->sizePolicy().hasHeightForWidth());
        label5->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label5, 1, 0, 1, 1);

        label4 = new QLabel(gridLayoutWidget_3);
        label4->setObjectName(QString::fromUtf8("label4"));
        sizePolicy3.setHeightForWidth(label4->sizePolicy().hasHeightForWidth());
        label4->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label4, 3, 0, 1, 1);

        confirm = new QLineEdit(gridLayoutWidget_3);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(confirm, 3, 1, 1, 1);

        username_2 = new QLabel(gridLayoutWidget_3);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        sizePolicy3.setHeightForWidth(username_2->sizePolicy().hasHeightForWidth());
        username_2->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(username_2, 0, 0, 1, 1);

        username2 = new QLineEdit(gridLayoutWidget_3);
        username2->setObjectName(QString::fromUtf8("username2"));

        gridLayout_3->addWidget(username2, 0, 1, 1, 1);

        address = new QLineEdit(gridLayoutWidget_3);
        address->setObjectName(QString::fromUtf8("address"));

        gridLayout_3->addWidget(address, 1, 1, 1, 1);

        label3 = new QLabel(gridLayoutWidget_3);
        label3->setObjectName(QString::fromUtf8("label3"));
        sizePolicy3.setHeightForWidth(label3->sizePolicy().hasHeightForWidth());
        label3->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label3, 2, 0, 1, 1);

        password2 = new QLineEdit(gridLayoutWidget_3);
        password2->setObjectName(QString::fromUtf8("password2"));
        password2->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(password2, 2, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(stackedWidgetPage2);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 360, 771, 81));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        role_2 = new QLabel(gridLayoutWidget_4);
        role_2->setObjectName(QString::fromUtf8("role_2"));
        sizePolicy.setHeightForWidth(role_2->sizePolicy().hasHeightForWidth());
        role_2->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(role_2, 0, 0, 1, 1);

        expert2 = new QRadioButton(gridLayoutWidget_4);
        expert2->setObjectName(QString::fromUtf8("expert2"));

        gridLayout_4->addWidget(expert2, 0, 1, 1, 1);

        factory2 = new QRadioButton(gridLayoutWidget_4);
        factory2->setObjectName(QString::fromUtf8("factory2"));

        gridLayout_4->addWidget(factory2, 0, 2, 1, 1);

        register_button = new QPushButton(stackedWidgetPage2);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(490, 470, 291, 51));
        back_login = new QPushButton(stackedWidgetPage2);
        back_login->setObjectName(QString::fromUtf8("back_login"));
        back_login->setGeometry(QRect(10, 470, 421, 51));
        label_status_2 = new QLabel(stackedWidgetPage2);
        label_status_2->setObjectName(QString::fromUtf8("label_status_2"));
        label_status_2->setGeometry(QRect(250, 40, 271, 41));
        stackedWidget->addWidget(stackedWidgetPage2);

        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_title->setText(QCoreApplication::translate("Dialog", "   \347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label1->setText(QCoreApplication::translate("Dialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        label2->setText(QCoreApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215/\351\202\256\347\256\261:", nullptr));
        go_register->setText(QCoreApplication::translate("Dialog", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\345\216\273\346\263\250\345\206\214", nullptr));
        foget_password->setText(QCoreApplication::translate("Dialog", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
        login_button->setText(QCoreApplication::translate("Dialog", "\347\231\273\345\275\225", nullptr));
        label_status->setText(QString());
        label->setText(QCoreApplication::translate("Dialog", "\350\247\222\350\211\262", nullptr));
        factory->setText(QCoreApplication::translate("Dialog", "\344\274\201\344\270\232\345\221\230\345\267\245", nullptr));
        expert->setText(QCoreApplication::translate("Dialog", "\344\270\223\345\256\266", nullptr));
        admin->setText(QCoreApplication::translate("Dialog", "\347\256\241\347\220\206\345\221\230", nullptr));
        label_title_2->setText(QCoreApplication::translate("Dialog", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label5->setText(QCoreApplication::translate("Dialog", "\351\202\256\347\256\261", nullptr));
        label4->setText(QCoreApplication::translate("Dialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        username_2->setText(QCoreApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label3->setText(QCoreApplication::translate("Dialog", "\345\257\206\347\240\201", nullptr));
        role_2->setText(QCoreApplication::translate("Dialog", "\350\247\222\350\211\262\357\274\232", nullptr));
        expert2->setText(QCoreApplication::translate("Dialog", "\344\270\223\345\256\266", nullptr));
        factory2->setText(QCoreApplication::translate("Dialog", "\344\274\201\344\270\232\345\221\230\345\267\245", nullptr));
        register_button->setText(QCoreApplication::translate("Dialog", "\346\263\250\345\206\214", nullptr));
        back_login->setText(QCoreApplication::translate("Dialog", "\345\267\262\346\234\211\350\264\246\345\217\267\357\274\237\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        label_status_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
