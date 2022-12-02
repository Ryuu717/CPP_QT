/********************************************************************************
** Form generated from reading UI file 'userrequestvaccinepass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREQUESTVACCINEPASS_H
#define UI_USERREQUESTVACCINEPASS_H

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

class Ui_UserRequestVaccinePass
{
public:
    QPushButton *pushButtonLogout;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QLabel *label_7;
    QLabel *label_6;
    QGroupBox *groupBox_6;
    QLabel *labelUserName;
    QLabel *labelIconUser;
    QPushButton *pushButtonViewProfile;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEditFirstName;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditLastName;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditDay;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEditMonth;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEditYear;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QLineEdit *lineEditEmail;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRequest;
    QLabel *label;

    void setupUi(QDialog *UserRequestVaccinePass)
    {
        if (UserRequestVaccinePass->objectName().isEmpty())
            UserRequestVaccinePass->setObjectName("UserRequestVaccinePass");
        UserRequestVaccinePass->resize(837, 555);
        pushButtonLogout = new QPushButton(UserRequestVaccinePass);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(730, 10, 100, 32));
        groupBox_2 = new QGroupBox(UserRequestVaccinePass);
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
        label_7 = new QLabel(UserRequestVaccinePass);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 140, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        label_6 = new QLabel(UserRequestVaccinePass);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        groupBox_6 = new QGroupBox(UserRequestVaccinePass);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(580, 10, 131, 41));
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
        groupBox = new QGroupBox(UserRequestVaccinePass);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 190, 491, 346));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEditFirstName = new QLineEdit(groupBox);
        lineEditFirstName->setObjectName("lineEditFirstName");

        verticalLayout->addWidget(lineEditFirstName);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        lineEditLastName = new QLineEdit(groupBox);
        lineEditLastName->setObjectName("lineEditLastName");

        verticalLayout_2->addWidget(lineEditLastName);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout_6->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        lineEditDay = new QLineEdit(groupBox);
        lineEditDay->setObjectName("lineEditDay");

        verticalLayout_3->addWidget(lineEditDay);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        verticalLayout_4->addWidget(label_8);

        lineEditMonth = new QLineEdit(groupBox);
        lineEditMonth->setObjectName("lineEditMonth");

        verticalLayout_4->addWidget(lineEditMonth);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        verticalLayout_5->addWidget(label_11);

        lineEditYear = new QLineEdit(groupBox);
        lineEditYear->setObjectName("lineEditYear");

        verticalLayout_5->addWidget(lineEditYear);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_6, 3, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        verticalLayout_7->addWidget(label_12);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout_7->addWidget(lineEditEmail);


        gridLayout->addLayout(verticalLayout_7, 4, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(UserRequestVaccinePass);

        QMetaObject::connectSlotsByName(UserRequestVaccinePass);
    } // setupUi

    void retranslateUi(QDialog *UserRequestVaccinePass)
    {
        UserRequestVaccinePass->setWindowTitle(QCoreApplication::translate("UserRequestVaccinePass", "Dialog", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserRequestVaccinePass", "Log out", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserRequestVaccinePass", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserRequestVaccinePass", " Request Vaccine Pass", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserRequestVaccinePass", "Home", nullptr));
        label_7->setText(QCoreApplication::translate("UserRequestVaccinePass", " Request Vaccine Pass", nullptr));
        label_6->setText(QCoreApplication::translate("UserRequestVaccinePass", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("UserRequestVaccinePass", "User Name", nullptr));
        labelIconUser->setText(QCoreApplication::translate("UserRequestVaccinePass", "Icon", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserRequestVaccinePass", "View Profile", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("UserRequestVaccinePass", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("UserRequestVaccinePass", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("UserRequestVaccinePass", "Date of Birth", nullptr));
        label_5->setText(QCoreApplication::translate("UserRequestVaccinePass", "Day", nullptr));
        label_8->setText(QCoreApplication::translate("UserRequestVaccinePass", "Month", nullptr));
        label_11->setText(QCoreApplication::translate("UserRequestVaccinePass", "Year", nullptr));
        label_12->setText(QCoreApplication::translate("UserRequestVaccinePass", "Email", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("UserRequestVaccinePass", "Back", nullptr));
        pushButtonRequest->setText(QCoreApplication::translate("UserRequestVaccinePass", "Request", nullptr));
        label->setText(QCoreApplication::translate("UserRequestVaccinePass", "Confirm your details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserRequestVaccinePass: public Ui_UserRequestVaccinePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREQUESTVACCINEPASS_H
