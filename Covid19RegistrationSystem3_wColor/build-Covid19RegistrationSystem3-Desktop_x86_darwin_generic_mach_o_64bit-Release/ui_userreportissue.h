/********************************************************************************
** Form generated from reading UI file 'userreportissue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREPORTISSUE_H
#define UI_USERREPORTISSUE_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserReportIssue
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEditFirstName;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditLastName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditEmail;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QTextEdit *textEditMessage;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonRequest;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *labelIconUser;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelUserName;
    QPushButton *pushButtonViewProfile;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonLogout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *UserReportIssue)
    {
        if (UserReportIssue->objectName().isEmpty())
            UserReportIssue->setObjectName("UserReportIssue");
        UserReportIssue->resize(832, 794);
        UserReportIssue->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        groupBox = new QGroupBox(UserReportIssue);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 186, 591, 501));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_5->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout->addWidget(label_2);

        lineEditFirstName = new QLineEdit(groupBox);
        lineEditFirstName->setObjectName("lineEditFirstName");
        lineEditFirstName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout->addWidget(lineEditFirstName);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_2->addWidget(label_3);

        lineEditLastName = new QLineEdit(groupBox);
        lineEditLastName->setObjectName("lineEditLastName");
        lineEditLastName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_2->addWidget(lineEditLastName);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_3->addWidget(label_5);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_3->addWidget(lineEditEmail);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_4->addWidget(label_12);

        textEditMessage = new QTextEdit(groupBox);
        textEditMessage->setObjectName("textEditMessage");
        textEditMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_4->addWidget(textEditMessage);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout_5->addLayout(horizontalLayout_2);

        label_7 = new QLabel(UserReportIssue);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 150, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        groupBox_2 = new QGroupBox(UserReportIssue);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 90, 481, 41));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(53, 9, 16, 16));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(64, 10, 241, 16));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        pushButtonHome = new QPushButton(groupBox_2);
        pushButtonHome->setObjectName("pushButtonHome");
        pushButtonHome->setGeometry(QRect(1, 1, 51, 32));
        pushButtonHome->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 14px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"	background-color: rgb(0, 0, 0, 0.1); \n"
"	border: none; \n"
"	color: rgb(0, 43, 255); \n"
"}"));
        pushButtonBack = new QPushButton(UserReportIssue);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(230, 710, 141, 31));
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
"    padding: 5 20px;\n"
"}\n"
""));
        pushButtonRequest = new QPushButton(UserReportIssue);
        pushButtonRequest->setObjectName("pushButtonRequest");
        pushButtonRequest->setGeometry(QRect(460, 710, 141, 31));
        pushButtonRequest->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"    padding: 5 20px;\n"
"}\n"
""));
        layoutWidget_2 = new QWidget(UserReportIssue);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 811, 75));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(368, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox_6 = new QGroupBox(layoutWidget_2);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 3px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName("gridLayout_2");
        labelIconUser = new QLabel(groupBox_6);
        labelIconUser->setObjectName("labelIconUser");
        labelIconUser->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        gridLayout_2->addWidget(labelIconUser, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        labelUserName = new QLabel(groupBox_6);
        labelUserName->setObjectName("labelUserName");
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        labelUserName->setFont(font1);
        labelUserName->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253,0)"));

        verticalLayout_6->addWidget(labelUserName);

        pushButtonViewProfile = new QPushButton(groupBox_6);
        pushButtonViewProfile->setObjectName("pushButtonViewProfile");
        pushButtonViewProfile->setLayoutDirection(Qt::LeftToRight);
        pushButtonViewProfile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 12px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"	background-color: rgb(0, 0, 0, 0.1); \n"
"	border: none; \n"
"	color: rgb(0, 43, 255); \n"
"}"));

        verticalLayout_6->addWidget(pushButtonViewProfile);


        gridLayout_2->addLayout(verticalLayout_6, 0, 1, 1, 1);


        horizontalLayout_3->addWidget(groupBox_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        pushButtonLogout = new QPushButton(layoutWidget_2);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(242, 189, 76); \n"
"    border: none;\n"
"     border-radius: 5px; \n"
"    color: rgb(0, 0, 0); \n"
"    font: 16px;\n"
"	padding: 5 20px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"    background-color: rgb(245, 149, 66); \n"
"    border: none; \n"
"    border-radius: 5px; \n"
"    color: rgb(0, 43, 255); \n"
"}"));

        verticalLayout_7->addWidget(pushButtonLogout);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_7);


        retranslateUi(UserReportIssue);

        QMetaObject::connectSlotsByName(UserReportIssue);
    } // setupUi

    void retranslateUi(QDialog *UserReportIssue)
    {
        UserReportIssue->setWindowTitle(QCoreApplication::translate("UserReportIssue", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("UserReportIssue", "Please fill out all forms", nullptr));
        label_2->setText(QCoreApplication::translate("UserReportIssue", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("UserReportIssue", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("UserReportIssue", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("UserReportIssue", "Write message", nullptr));
        label_7->setText(QCoreApplication::translate("UserReportIssue", " Report Issue", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserReportIssue", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserReportIssue", " Report Issue", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserReportIssue", "Home", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("UserReportIssue", "Back", nullptr));
        pushButtonRequest->setText(QCoreApplication::translate("UserReportIssue", "Request", nullptr));
        label_4->setText(QCoreApplication::translate("UserReportIssue", "My Health Account ", nullptr));
        groupBox_6->setTitle(QString());
        labelIconUser->setText(QCoreApplication::translate("UserReportIssue", "Icon", nullptr));
        labelUserName->setText(QCoreApplication::translate("UserReportIssue", "User Name", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserReportIssue", "View Profile", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserReportIssue", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserReportIssue: public Ui_UserReportIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREPORTISSUE_H
