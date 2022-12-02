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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserReportIssue
{
public:
    QLabel *label_6;
    QGroupBox *groupBox_6;
    QLabel *labelUserName;
    QLabel *labelIconUser;
    QPushButton *pushButtonViewProfile;
    QPushButton *pushButtonLogout;
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
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRequest;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;

    void setupUi(QDialog *UserReportIssue)
    {
        if (UserReportIssue->objectName().isEmpty())
            UserReportIssue->setObjectName("UserReportIssue");
        UserReportIssue->resize(832, 718);
        label_6 = new QLabel(UserReportIssue);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 10, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        groupBox_6 = new QGroupBox(UserReportIssue);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(570, 10, 131, 41));
        labelUserName = new QLabel(groupBox_6);
        labelUserName->setObjectName("labelUserName");
        labelUserName->setGeometry(QRect(50, 0, 91, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        labelUserName->setFont(font);
        labelUserName->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        labelIconUser = new QLabel(groupBox_6);
        labelIconUser->setObjectName("labelIconUser");
        labelIconUser->setGeometry(QRect(10, 0, 41, 41));
        pushButtonViewProfile = new QPushButton(groupBox_6);
        pushButtonViewProfile->setObjectName("pushButtonViewProfile");
        pushButtonViewProfile->setGeometry(QRect(50, 20, 71, 16));
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
        pushButtonLogout = new QPushButton(UserReportIssue);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(720, 10, 100, 32));
        groupBox = new QGroupBox(UserReportIssue);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 190, 571, 489));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));

        verticalLayout_5->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEditFirstName = new QLineEdit(groupBox);
        lineEditFirstName->setObjectName("lineEditFirstName");

        verticalLayout->addWidget(lineEditFirstName);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        lineEditLastName = new QLineEdit(groupBox);
        lineEditLastName->setObjectName("lineEditLastName");

        verticalLayout_2->addWidget(lineEditLastName);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout_3->addWidget(lineEditEmail);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        verticalLayout_4->addWidget(label_12);

        textEditMessage = new QTextEdit(groupBox);
        textEditMessage->setObjectName("textEditMessage");

        verticalLayout_4->addWidget(textEditMessage);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonBack = new QPushButton(groupBox);
        pushButtonBack->setObjectName("pushButtonBack");

        horizontalLayout_2->addWidget(pushButtonBack);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonRequest = new QPushButton(groupBox);
        pushButtonRequest->setObjectName("pushButtonRequest");

        horizontalLayout_2->addWidget(pushButtonRequest);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_7 = new QLabel(UserReportIssue);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 140, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox_2 = new QGroupBox(UserReportIssue);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 80, 481, 41));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(53, 9, 16, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(64, 10, 241, 16));
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

        retranslateUi(UserReportIssue);

        QMetaObject::connectSlotsByName(UserReportIssue);
    } // setupUi

    void retranslateUi(QDialog *UserReportIssue)
    {
        UserReportIssue->setWindowTitle(QCoreApplication::translate("UserReportIssue", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("UserReportIssue", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("UserReportIssue", "User Name", nullptr));
        labelIconUser->setText(QCoreApplication::translate("UserReportIssue", "Icon", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserReportIssue", "View Profile", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserReportIssue", "Log out", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("UserReportIssue", "Please fill out all forms", nullptr));
        label_2->setText(QCoreApplication::translate("UserReportIssue", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("UserReportIssue", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("UserReportIssue", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("UserReportIssue", "Write message", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("UserReportIssue", "Back", nullptr));
        pushButtonRequest->setText(QCoreApplication::translate("UserReportIssue", "Request", nullptr));
        label_7->setText(QCoreApplication::translate("UserReportIssue", " Report Issue", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserReportIssue", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserReportIssue", " Report Issue", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserReportIssue", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserReportIssue: public Ui_UserReportIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREPORTISSUE_H
