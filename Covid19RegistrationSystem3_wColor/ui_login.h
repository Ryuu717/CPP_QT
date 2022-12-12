/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEditEmail;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEditPassword;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonConfirm;
    QLabel *label;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(634, 337);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        label_6 = new QLabel(Login);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 10, 321, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 110, 351, 121));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 3px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout->addWidget(label_3);

        verticalSpacer_6 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout->addWidget(label_4);

        verticalSpacer_7 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_2->addWidget(lineEditEmail);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_2->addWidget(lineEditPassword);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_7 = new QLabel(Login);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 64, 201, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        pushButtonBack = new QPushButton(Login);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(160, 280, 91, 31));
        pushButtonBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(242, 189, 76); \n"
"    border: none;\n"
"     border-radius: 5px; \n"
"    color: rgb(0, 0, 0); \n"
"    font: 16px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"    background-color: rgb(245, 149, 66); \n"
"    border: none; \n"
"    border-radius: 5px; \n"
"    color: rgb(0, 43, 255); \n"
"}"));
        pushButtonConfirm = new QPushButton(Login);
        pushButtonConfirm->setObjectName("pushButtonConfirm");
        pushButtonConfirm->setGeometry(QRect(360, 280, 101, 31));
        pushButtonConfirm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(242, 189, 76); \n"
"    border: none;\n"
"     border-radius: 5px; \n"
"    color: rgb(0, 0, 0); \n"
"    font: 16px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"    background-color: rgb(245, 149, 66); \n"
"    border: none; \n"
"    border-radius: 5px; \n"
"    color: rgb(0, 43, 255); \n"
"}"));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(375, 243, 111, 16));
        QFont font;
        font.setUnderline(true);
        label->setFont(font);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "My health account ", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("Login", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "Login", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("Login", "Back", nullptr));
        pushButtonConfirm->setText(QCoreApplication::translate("Login", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("Login", "Forget Password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
