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
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QGroupBox *groupBox_6;
    QLabel *labelUserName;
    QLabel *labelIconUser;
    QPushButton *pushButtonViewProfile;
    QPushButton *pushButtonLogout;
    QGroupBox *groupBox;
    QLabel *labelRATKitImage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxCYes;
    QCheckBox *checkBoxCNo;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxTYes;
    QCheckBox *checkBoxTNo;
    QLabel *labelLink;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSubmit;

    void setupUi(QDialog *UserReportRATResult)
    {
        if (UserReportRATResult->objectName().isEmpty())
            UserReportRATResult->setObjectName("UserReportRATResult");
        UserReportRATResult->resize(831, 782);
        label_6 = new QLabel(UserReportRATResult);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 10, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        label_7 = new QLabel(UserReportRATResult);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 140, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox_2 = new QGroupBox(UserReportRATResult);
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
        groupBox_6 = new QGroupBox(UserReportRATResult);
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
        pushButtonLogout = new QPushButton(UserReportRATResult);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(720, 10, 100, 32));
        groupBox = new QGroupBox(UserReportRATResult);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 190, 711, 511));
        labelRATKitImage = new QLabel(groupBox);
        labelRATKitImage->setObjectName("labelRATKitImage");
        labelRATKitImage->setGeometry(QRect(210, 50, 301, 251));
        labelRATKitImage->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 320, 391, 161));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxCYes = new QCheckBox(layoutWidget);
        checkBoxCYes->setObjectName("checkBoxCYes");

        horizontalLayout->addWidget(checkBoxCYes);

        checkBoxCNo = new QCheckBox(layoutWidget);
        checkBoxCNo->setObjectName("checkBoxCNo");

        horizontalLayout->addWidget(checkBoxCNo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxTYes = new QCheckBox(layoutWidget);
        checkBoxTYes->setObjectName("checkBoxTYes");

        horizontalLayout_2->addWidget(checkBoxTYes);

        checkBoxTNo = new QCheckBox(layoutWidget);
        checkBoxTNo->setObjectName("checkBoxTNo");

        horizontalLayout_2->addWidget(checkBoxTNo);


        verticalLayout->addLayout(horizontalLayout_2);

        labelLink = new QLabel(layoutWidget);
        labelLink->setObjectName("labelLink");

        verticalLayout->addWidget(labelLink);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setDateTime(QDateTime(QDate(2021, 12, 31), QTime(22, 0, 0)));

        verticalLayout->addWidget(dateEdit);

        timeEdit = new QTimeEdit(layoutWidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setDateTime(QDateTime(QDate(2021, 12, 29), QTime(9, 0, 0)));
        timeEdit->setTime(QTime(9, 0, 0));

        verticalLayout->addWidget(timeEdit);


        horizontalLayout_3->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(UserReportRATResult);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(210, 720, 421, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonBack = new QPushButton(layoutWidget1);
        pushButtonBack->setObjectName("pushButtonBack");

        horizontalLayout_4->addWidget(pushButtonBack);

        horizontalSpacer_2 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonSubmit = new QPushButton(layoutWidget1);
        pushButtonSubmit->setObjectName("pushButtonSubmit");

        horizontalLayout_4->addWidget(pushButtonSubmit);


        retranslateUi(UserReportRATResult);

        QMetaObject::connectSlotsByName(UserReportRATResult);
    } // setupUi

    void retranslateUi(QDialog *UserReportRATResult)
    {
        UserReportRATResult->setWindowTitle(QCoreApplication::translate("UserReportRATResult", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("UserReportRATResult", "My health account ", nullptr));
        label_7->setText(QCoreApplication::translate("UserReportRATResult", " Report a RAT Result", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserReportRATResult", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserReportRATResult", " Report a RAT Result", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserReportRATResult", "Home", nullptr));
        groupBox_6->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("UserReportRATResult", "User Name", nullptr));
        labelIconUser->setText(QCoreApplication::translate("UserReportRATResult", "Icon", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserReportRATResult", "View Profile", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserReportRATResult", "Log out", nullptr));
        groupBox->setTitle(QString());
        labelRATKitImage->setText(QCoreApplication::translate("UserReportRATResult", "RAT Kit Image", nullptr));
        label->setText(QCoreApplication::translate("UserReportRATResult", "Is the control line (C) visible?", nullptr));
        label_2->setText(QCoreApplication::translate("UserReportRATResult", "Is the test line (T) visible?", nullptr));
        label_4->setText(QCoreApplication::translate("UserReportRATResult", "Day test was taken (Day/Month/Year)", nullptr));
        label_5->setText(QCoreApplication::translate("UserReportRATResult", "Time test was taken", nullptr));
        checkBoxCYes->setText(QCoreApplication::translate("UserReportRATResult", "Yes", nullptr));
        checkBoxCNo->setText(QCoreApplication::translate("UserReportRATResult", "No", nullptr));
        checkBoxTYes->setText(QCoreApplication::translate("UserReportRATResult", "Yes", nullptr));
        checkBoxTNo->setText(QCoreApplication::translate("UserReportRATResult", "No", nullptr));
        labelLink->setText(QCoreApplication::translate("UserReportRATResult", "Link", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("UserReportRATResult", "Back", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("UserReportRATResult", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserReportRATResult: public Ui_UserReportRATResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREPORTRATRESULT_H
