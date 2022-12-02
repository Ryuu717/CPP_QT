/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPage
{
public:
    QAction *actionview;
    QLabel *label;
    QGroupBox *groupBox_6;
    QLabel *labelUserName;
    QLabel *labelIconUser;
    QPushButton *pushButtonViewProfile;
    QPushButton *pushButtonLogout;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *labelIconSend2;
    QPushButton *pushButtonReportIssue;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *labelIconView2;
    QPushButton *pushButtonVaccinationRecord;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelIconPass;
    QPushButton *pushButtonVaccinePass;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelIconView1;
    QPushButton *pushButtonCovid19TestResult;
    QGroupBox *groupBox_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *labelIconSend1;
    QPushButton *pushButtonRATResult;

    void setupUi(QDialog *UserPage)
    {
        if (UserPage->objectName().isEmpty())
            UserPage->setObjectName("UserPage");
        UserPage->resize(835, 367);
        actionview = new QAction(UserPage);
        actionview->setObjectName("actionview");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview->setIcon(icon);
        label = new QLabel(UserPage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        groupBox_6 = new QGroupBox(UserPage);
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
        pushButtonLogout = new QPushButton(UserPage);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(730, 10, 100, 32));
        layoutWidget = new QWidget(UserPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 100, 681, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName("groupBox_4");
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 10, 141, 16));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 40, 181, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        labelIconSend2 = new QLabel(groupBox_4);
        labelIconSend2->setObjectName("labelIconSend2");
        labelIconSend2->setGeometry(QRect(170, 0, 41, 31));
        pushButtonReportIssue = new QPushButton(groupBox_4);
        pushButtonReportIssue->setObjectName("pushButtonReportIssue");
        pushButtonReportIssue->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 10, 171, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 40, 191, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        labelIconView2 = new QLabel(groupBox_2);
        labelIconView2->setObjectName("labelIconView2");
        labelIconView2->setGeometry(QRect(170, 0, 41, 31));
        pushButtonVaccinationRecord = new QPushButton(groupBox_2);
        pushButtonVaccinationRecord->setObjectName("pushButtonVaccinationRecord");
        pushButtonVaccinationRecord->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName("groupBox_3");
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 10, 141, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 40, 181, 16));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        labelIconPass = new QLabel(groupBox_3);
        labelIconPass->setObjectName("labelIconPass");
        labelIconPass->setGeometry(QRect(170, 0, 41, 31));
        pushButtonVaccinePass = new QPushButton(groupBox_3);
        pushButtonVaccinePass->setObjectName("pushButtonVaccinePass");
        pushButtonVaccinePass->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 10, 141, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 191, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        labelIconView1 = new QLabel(groupBox);
        labelIconView1->setObjectName("labelIconView1");
        labelIconView1->setGeometry(QRect(170, 0, 41, 31));
        pushButtonCovid19TestResult = new QPushButton(groupBox);
        pushButtonCovid19TestResult->setObjectName("pushButtonCovid19TestResult");
        pushButtonCovid19TestResult->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName("groupBox_5");
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 10, 141, 16));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 40, 171, 16));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        labelIconSend1 = new QLabel(groupBox_5);
        labelIconSend1->setObjectName("labelIconSend1");
        labelIconSend1->setGeometry(QRect(170, 0, 41, 31));
        pushButtonRATResult = new QPushButton(groupBox_5);
        pushButtonRATResult->setObjectName("pushButtonRATResult");
        pushButtonRATResult->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);


        retranslateUi(UserPage);

        QMetaObject::connectSlotsByName(UserPage);
    } // setupUi

    void retranslateUi(QDialog *UserPage)
    {
        UserPage->setWindowTitle(QCoreApplication::translate("UserPage", "Dialog", nullptr));
        actionview->setText(QCoreApplication::translate("UserPage", "view", nullptr));
        label->setText(QCoreApplication::translate("UserPage", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("UserPage", "User Name", nullptr));
        labelIconUser->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserPage", "View Profile", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserPage", "Log out", nullptr));
        groupBox_4->setTitle(QString());
        label_11->setText(QCoreApplication::translate("UserPage", " Report Issue", nullptr));
        label_12->setText(QCoreApplication::translate("UserPage", "Report any issues you may encounter. ", nullptr));
        labelIconSend2->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonReportIssue->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("UserPage", "View Vaccination Record", nullptr));
        label_6->setText(QCoreApplication::translate("UserPage", "View your Vaccination records.", nullptr));
        labelIconView2->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonVaccinationRecord->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_3->setTitle(QString());
        label_8->setText(QCoreApplication::translate("UserPage", "Request Vaccine Pass", nullptr));
        label_9->setText(QCoreApplication::translate("UserPage", "Request your Vaccine Pass.", nullptr));
        labelIconPass->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonVaccinePass->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("UserPage", "View RAT Result", nullptr));
        label_3->setText(QCoreApplication::translate("UserPage", "View your Covid-19 test results.", nullptr));
        labelIconView1->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonCovid19TestResult->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_5->setTitle(QString());
        label_14->setText(QCoreApplication::translate("UserPage", "Report RAT Result", nullptr));
        label_15->setText(QCoreApplication::translate("UserPage", "Report your RAT Results.", nullptr));
        labelIconSend1->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonRATResult->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPage: public Ui_UserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
