/********************************************************************************
** Form generated from reading UI file 'userreportratresult.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREPORTRATRESULT_H
#define UI_USERREPORTRATRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserReportRATResult
{
public:
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelRATKitImage;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxCYes;
    QCheckBox *checkBoxCNo;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxTYes;
    QCheckBox *checkBoxTNo;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *labelLink;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonSubmit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *labelIconUser;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelUserName;
    QPushButton *pushButtonViewProfile;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonLogout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *UserReportRATResult)
    {
        if (UserReportRATResult->objectName().isEmpty())
            UserReportRATResult->setObjectName("UserReportRATResult");
        UserReportRATResult->resize(831, 784);
        UserReportRATResult->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        label_7 = new QLabel(UserReportRATResult);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 149, 291, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        groupBox_2 = new QGroupBox(UserReportRATResult);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 89, 481, 41));
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
        groupBox = new QGroupBox(UserReportRATResult);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(160, 190, 445, 491));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        labelRATKitImage = new QLabel(groupBox);
        labelRATKitImage->setObjectName("labelRATKitImage");
        labelRATKitImage->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        labelRATKitImage->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRATKitImage, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxCYes = new QCheckBox(groupBox);
        checkBoxCYes->setObjectName("checkBoxCYes");
        checkBoxCYes->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        horizontalLayout->addWidget(checkBoxCYes);

        checkBoxCNo = new QCheckBox(groupBox);
        checkBoxCNo->setObjectName("checkBoxCNo");
        checkBoxCNo->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        horizontalLayout->addWidget(checkBoxCNo);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxTYes = new QCheckBox(groupBox);
        checkBoxTYes->setObjectName("checkBoxTYes");
        checkBoxTYes->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        horizontalLayout_2->addWidget(checkBoxTYes);

        checkBoxTNo = new QCheckBox(groupBox);
        checkBoxTNo->setObjectName("checkBoxTNo");
        checkBoxTNo->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        horizontalLayout_2->addWidget(checkBoxTNo);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        labelLink = new QLabel(groupBox);
        labelLink->setObjectName("labelLink");
        labelLink->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        horizontalLayout_6->addWidget(labelLink);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
        dateEdit->setDateTime(QDateTime(QDate(2021, 12, 28), QTime(3, 0, 0)));

        verticalLayout_4->addWidget(dateEdit);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
        timeEdit->setDateTime(QDateTime(QDate(2021, 12, 22), QTime(9, 0, 0)));
        timeEdit->setTime(QTime(9, 0, 0));

        verticalLayout_4->addWidget(timeEdit);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_7, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        pushButtonBack = new QPushButton(UserReportRATResult);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(204, 710, 121, 29));
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
"}"));
        pushButtonSubmit = new QPushButton(UserReportRATResult);
        pushButtonSubmit->setObjectName("pushButtonSubmit");
        pushButtonSubmit->setGeometry(QRect(450, 710, 121, 29));
        pushButtonSubmit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        layoutWidget_2 = new QWidget(UserReportRATResult);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 811, 75));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(368, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

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
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        labelUserName->setFont(font);
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


        horizontalLayout_4->addWidget(groupBox_6);

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


        horizontalLayout_4->addLayout(verticalLayout_6);


        retranslateUi(UserReportRATResult);

        QMetaObject::connectSlotsByName(UserReportRATResult);
    } // setupUi

    void retranslateUi(QDialog *UserReportRATResult)
    {
        UserReportRATResult->setWindowTitle(QCoreApplication::translate("UserReportRATResult", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("UserReportRATResult", " Report a RAT Result", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserReportRATResult", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserReportRATResult", " Report a RAT Result", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserReportRATResult", "Home", nullptr));
        groupBox->setTitle(QString());
        labelRATKitImage->setText(QCoreApplication::translate("UserReportRATResult", "RAT Kit Image", nullptr));
        label->setText(QCoreApplication::translate("UserReportRATResult", "Is the control line (C) visible?", nullptr));
        label_2->setText(QCoreApplication::translate("UserReportRATResult", "Is the test line (T) visible?", nullptr));
        checkBoxCYes->setText(QCoreApplication::translate("UserReportRATResult", "Yes", nullptr));
        checkBoxCNo->setText(QCoreApplication::translate("UserReportRATResult", "No", nullptr));
        checkBoxTYes->setText(QCoreApplication::translate("UserReportRATResult", "Yes", nullptr));
        checkBoxTNo->setText(QCoreApplication::translate("UserReportRATResult", "No", nullptr));
        labelLink->setText(QCoreApplication::translate("UserReportRATResult", "Link", nullptr));
        label_4->setText(QCoreApplication::translate("UserReportRATResult", "Day test was taken (Day/Month/Year)", nullptr));
        label_5->setText(QCoreApplication::translate("UserReportRATResult", "Time test was taken", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("UserReportRATResult", "Back", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("UserReportRATResult", "Submit", nullptr));
        label_3->setText(QCoreApplication::translate("UserReportRATResult", "My Health Account ", nullptr));
        groupBox_6->setTitle(QString());
        labelIconUser->setText(QCoreApplication::translate("UserReportRATResult", "Icon", nullptr));
        labelUserName->setText(QCoreApplication::translate("UserReportRATResult", "User Name", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserReportRATResult", "View Profile", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserReportRATResult", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserReportRATResult: public Ui_UserReportRATResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREPORTRATRESULT_H
