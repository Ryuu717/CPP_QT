/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditFirstName;
    QLabel *label_2;
    QLineEdit *lineEditLastName;
    QLabel *label_3;
    QLineEdit *lineEditEmail;
    QLabel *label_13;
    QLineEdit *lineEditNHINumber;
    QLabel *label_4;
    QLineEdit *lineEditPassword;
    QLabel *label_5;
    QLineEdit *lineEditPasswordConfirm;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonConfirm;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(726, 455);
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        label_6 = new QLabel(Signup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 20, 321, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        label_7 = new QLabel(Signup);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(130, 70, 201, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        groupBox = new QGroupBox(Signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 120, 391, 200));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } \n"
"\n"
"\n"
""));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditFirstName = new QLineEdit(groupBox);
        lineEditFirstName->setObjectName("lineEditFirstName");
        lineEditFirstName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditFirstName);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditLastName = new QLineEdit(groupBox);
        lineEditLastName->setObjectName("lineEditLastName");
        lineEditLastName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditLastName);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditEmail);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_13);

        lineEditNHINumber = new QLineEdit(groupBox);
        lineEditNHINumber->setObjectName("lineEditNHINumber");
        lineEditNHINumber->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditNHINumber);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditPassword);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEditPasswordConfirm = new QLineEdit(groupBox);
        lineEditPasswordConfirm->setObjectName("lineEditPasswordConfirm");
        lineEditPasswordConfirm->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditPasswordConfirm);

        groupBox_2 = new QGroupBox(Signup);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(550, 120, 163, 161));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } \n"
"\n"
"\n"
""));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(15, 33, 133, 16));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(15, 57, 111, 16));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(15, 81, 107, 16));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)\n"
""));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(15, 105, 93, 16));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(15, 129, 130, 16));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        pushButtonBack = new QPushButton(Signup);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(200, 370, 91, 31));
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
        pushButtonConfirm = new QPushButton(Signup);
        pushButtonConfirm->setObjectName("pushButtonConfirm");
        pushButtonConfirm->setGeometry(QRect(410, 370, 101, 31));
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

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "My health account ", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "Signup", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Signup", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        label_13->setText(QCoreApplication::translate("Signup", "NHI Number", nullptr));
#if QT_CONFIG(whatsthis)
        label_4->setWhatsThis(QCoreApplication::translate("Signup", "<html><head/><body><p>background-color: rgb(242, 248, 253,0)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Password(Confirm)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Signup", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("Signup", "- At least 8 characters", nullptr));
        label_9->setText(QCoreApplication::translate("Signup", "- Uppercase (A-Z)", nullptr));
        label_10->setText(QCoreApplication::translate("Signup", "- Lowercase (a-z)", nullptr));
        label_11->setText(QCoreApplication::translate("Signup", "- Number (0-9)", nullptr));
        label_12->setText(QCoreApplication::translate("Signup", "- Symbols (#,$,%,&,!)", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("Signup", "Back", nullptr));
        pushButtonConfirm->setText(QCoreApplication::translate("Signup", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
