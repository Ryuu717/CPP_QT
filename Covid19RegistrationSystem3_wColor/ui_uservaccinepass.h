/********************************************************************************
** Form generated from reading UI file 'uservaccinepass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERVACCINEPASS_H
#define UI_USERVACCINEPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserVaccinePass
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *labelQRCode;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *labelEmail;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *labelDateOfBirth;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *labelMobileNumber;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *labelIconUser;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelUserName;
    QPushButton *pushButtonViewProfile;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonLogout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *UserVaccinePass)
    {
        if (UserVaccinePass->objectName().isEmpty())
            UserVaccinePass->setObjectName("UserVaccinePass");
        UserVaccinePass->resize(826, 676);
        UserVaccinePass->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        groupBox_2 = new QGroupBox(UserVaccinePass);
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
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
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
        groupBox = new QGroupBox(UserVaccinePass);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 200, 721, 461));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        horizontalLayout_3->addWidget(label_6);

        labelQRCode = new QLabel(groupBox);
        labelQRCode->setObjectName("labelQRCode");
        labelQRCode->setAutoFillBackground(false);
        labelQRCode->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
        labelQRCode->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelQRCode);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)\n"
""));

        horizontalLayout_3->addWidget(label_8);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelName = new QLabel(groupBox);
        labelName->setObjectName("labelName");
        labelName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        horizontalLayout->addWidget(labelName);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_3->addWidget(label_3);

        labelEmail = new QLabel(groupBox);
        labelEmail->setObjectName("labelEmail");
        labelEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_3->addWidget(labelEmail);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_2->addWidget(label_4);

        labelDateOfBirth = new QLabel(groupBox);
        labelDateOfBirth->setObjectName("labelDateOfBirth");
        labelDateOfBirth->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_2->addWidget(labelDateOfBirth);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_4->addWidget(label_5);

        labelMobileNumber = new QLabel(groupBox);
        labelMobileNumber->setObjectName("labelMobileNumber");
        labelMobileNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_4->addWidget(labelMobileNumber);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        label_7 = new QLabel(UserVaccinePass);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 150, 301, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        layoutWidget_2 = new QWidget(UserVaccinePass);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 801, 75));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(368, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

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

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
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

        verticalLayout_5->addWidget(labelUserName);

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

        verticalLayout_5->addWidget(pushButtonViewProfile);


        gridLayout_2->addLayout(verticalLayout_5, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
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

        verticalLayout_6->addWidget(pushButtonLogout);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_6);


        retranslateUi(UserVaccinePass);

        QMetaObject::connectSlotsByName(UserVaccinePass);
    } // setupUi

    void retranslateUi(QDialog *UserVaccinePass)
    {
        UserVaccinePass->setWindowTitle(QCoreApplication::translate("UserVaccinePass", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserVaccinePass", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserVaccinePass", "Request Vaccine Pass", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserVaccinePass", "Home", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QString());
        labelQRCode->setText(QCoreApplication::translate("UserVaccinePass", "QR Code", nullptr));
        label_8->setText(QString());
        label_2->setText(QCoreApplication::translate("UserVaccinePass", "Name", nullptr));
        labelName->setText(QCoreApplication::translate("UserVaccinePass", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("UserVaccinePass", "Email Address", nullptr));
        labelEmail->setText(QCoreApplication::translate("UserVaccinePass", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("UserVaccinePass", "Data of Birth", nullptr));
        labelDateOfBirth->setText(QCoreApplication::translate("UserVaccinePass", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("UserVaccinePass", "Mobile Number", nullptr));
        labelMobileNumber->setText(QCoreApplication::translate("UserVaccinePass", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("UserVaccinePass", "Request Vaccine Pass", nullptr));
        label->setText(QCoreApplication::translate("UserVaccinePass", "My Health Account ", nullptr));
        groupBox_6->setTitle(QString());
        labelIconUser->setText(QCoreApplication::translate("UserVaccinePass", "Icon", nullptr));
        labelUserName->setText(QCoreApplication::translate("UserVaccinePass", "User Name", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserVaccinePass", "View Profile", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserVaccinePass", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserVaccinePass: public Ui_UserVaccinePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERVACCINEPASS_H
