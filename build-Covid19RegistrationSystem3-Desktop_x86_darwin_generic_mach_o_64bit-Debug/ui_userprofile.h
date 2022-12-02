/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QLabel *label_7;
    QGroupBox *groupBox;
    QLabel *labelNHINumberTitle;
    QLabel *labelQRCode;
    QLabel *labelNHINumber;
    QWidget *layoutWidget;
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
    QPushButton *pushButtonLogout;
    QGroupBox *groupBox_6;
    QLabel *labelUserName;
    QLabel *labelIconUser;
    QPushButton *pushButtonViewProfile;
    QLabel *label;

    void setupUi(QDialog *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName("UserProfile");
        UserProfile->resize(830, 684);
        groupBox_2 = new QGroupBox(UserProfile);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 80, 481, 41));
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
        label_7 = new QLabel(UserProfile);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 140, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox = new QGroupBox(UserProfile);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 190, 711, 471));
        labelNHINumberTitle = new QLabel(groupBox);
        labelNHINumberTitle->setObjectName("labelNHINumberTitle");
        labelNHINumberTitle->setGeometry(QRect(300, 20, 111, 16));
        QFont font;
        font.setBold(true);
        labelNHINumberTitle->setFont(font);
        labelNHINumberTitle->setAlignment(Qt::AlignCenter);
        labelQRCode = new QLabel(groupBox);
        labelQRCode->setObjectName("labelQRCode");
        labelQRCode->setGeometry(QRect(210, 50, 301, 251));
        labelQRCode->setAlignment(Qt::AlignCenter);
        labelNHINumber = new QLabel(groupBox);
        labelNHINumber->setObjectName("labelNHINumber");
        labelNHINumber->setGeometry(QRect(300, 50, 111, 16));
        labelNHINumber->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 330, 661, 98));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelName = new QLabel(layoutWidget);
        labelName->setObjectName("labelName");

        horizontalLayout->addWidget(labelName);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName("labelEmail");

        verticalLayout_3->addWidget(labelEmail);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        labelDateOfBirth = new QLabel(layoutWidget);
        labelDateOfBirth->setObjectName("labelDateOfBirth");

        verticalLayout_2->addWidget(labelDateOfBirth);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_4->addWidget(label_5);

        labelMobileNumber = new QLabel(layoutWidget);
        labelMobileNumber->setObjectName("labelMobileNumber");

        verticalLayout_4->addWidget(labelMobileNumber);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        pushButtonLogout = new QPushButton(UserProfile);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(730, 10, 100, 32));
        groupBox_6 = new QGroupBox(UserProfile);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(580, 10, 131, 41));
        labelUserName = new QLabel(groupBox_6);
        labelUserName->setObjectName("labelUserName");
        labelUserName->setGeometry(QRect(50, 0, 91, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        labelUserName->setFont(font1);
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
        label = new QLabel(UserProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));

        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QDialog *UserProfile)
    {
        UserProfile->setWindowTitle(QCoreApplication::translate("UserProfile", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserProfile", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserProfile", "Profile", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserProfile", "Home", nullptr));
        label_7->setText(QCoreApplication::translate("UserProfile", "Profile", nullptr));
        groupBox->setTitle(QString());
        labelNHINumberTitle->setText(QCoreApplication::translate("UserProfile", "NHI Number", nullptr));
        labelQRCode->setText(QCoreApplication::translate("UserProfile", "QR Code", nullptr));
        labelNHINumber->setText(QCoreApplication::translate("UserProfile", "**********", nullptr));
        label_2->setText(QCoreApplication::translate("UserProfile", "Name", nullptr));
        labelName->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("UserProfile", "Email Address", nullptr));
        labelEmail->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("UserProfile", "Data of Birth", nullptr));
        labelDateOfBirth->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("UserProfile", "Mobile Number", nullptr));
        labelMobileNumber->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserProfile", "Log out", nullptr));
        groupBox_6->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("UserProfile", "User Name", nullptr));
        labelIconUser->setText(QCoreApplication::translate("UserProfile", "Icon", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserProfile", "View Profile", nullptr));
        label->setText(QCoreApplication::translate("UserProfile", "My health account ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
