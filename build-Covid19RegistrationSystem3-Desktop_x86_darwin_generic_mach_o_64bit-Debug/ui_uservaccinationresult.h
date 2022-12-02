/********************************************************************************
** Form generated from reading UI file 'uservaccinationresult.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERVACCINATIONRESULT_H
#define UI_USERVACCINATIONRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserVaccinationResult
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButtonHome;
    QGroupBox *groupBox_3;
    QLabel *labelIconVaccine2;
    QLabel *labelVaccine1Name;
    QLabel *label_14;
    QLabel *labelVaccine1Date;
    QLabel *label_11;
    QPushButton *pushButtonLogout;
    QLabel *label_7;
    QGroupBox *groupBox_6;
    QLabel *labelUserName;
    QLabel *labelIconUser;
    QPushButton *pushButtonViewProfile;
    QLabel *label_6;
    QGroupBox *groupBox;
    QLabel *labelIconVaccine1;
    QLabel *labelVaccine2Name;
    QLabel *label_3;
    QLabel *labelVaccine2Date;
    QGroupBox *groupBox_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelManufacturer2;
    QLabel *labelBatchNumber2;
    QGroupBox *groupBox_5;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelManufacturer1;
    QLabel *labelBatchNumber1;

    void setupUi(QDialog *UserVaccinationResult)
    {
        if (UserVaccinationResult->objectName().isEmpty())
            UserVaccinationResult->setObjectName("UserVaccinationResult");
        UserVaccinationResult->resize(836, 547);
        groupBox_2 = new QGroupBox(UserVaccinationResult);
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
        groupBox_3 = new QGroupBox(UserVaccinationResult);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(70, 360, 401, 51));
        labelIconVaccine2 = new QLabel(groupBox_3);
        labelIconVaccine2->setObjectName("labelIconVaccine2");
        labelIconVaccine2->setGeometry(QRect(20, 5, 26, 41));
        labelVaccine1Name = new QLabel(groupBox_3);
        labelVaccine1Name->setObjectName("labelVaccine1Name");
        labelVaccine1Name->setGeometry(QRect(79, 2, 181, 19));
        labelVaccine1Name->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(79, 29, 51, 16));
        labelVaccine1Date = new QLabel(groupBox_3);
        labelVaccine1Date->setObjectName("labelVaccine1Date");
        labelVaccine1Date->setGeometry(QRect(299, 17, 91, 16));
        label_11 = new QLabel(UserVaccinationResult);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(70, 180, 201, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));
        pushButtonLogout = new QPushButton(UserVaccinationResult);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(730, 10, 100, 32));
        label_7 = new QLabel(UserVaccinationResult);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 140, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox_6 = new QGroupBox(UserVaccinationResult);
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
        label_6 = new QLabel(UserVaccinationResult);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        groupBox = new QGroupBox(UserVaccinationResult);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 210, 401, 51));
        labelIconVaccine1 = new QLabel(groupBox);
        labelIconVaccine1->setObjectName("labelIconVaccine1");
        labelIconVaccine1->setGeometry(QRect(20, 5, 26, 41));
        labelVaccine2Name = new QLabel(groupBox);
        labelVaccine2Name->setObjectName("labelVaccine2Name");
        labelVaccine2Name->setGeometry(QRect(79, 2, 171, 19));
        labelVaccine2Name->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(79, 29, 61, 16));
        labelVaccine2Date = new QLabel(groupBox);
        labelVaccine2Date->setObjectName("labelVaccine2Date");
        labelVaccine2Date->setGeometry(QRect(299, 17, 91, 16));
        groupBox_4 = new QGroupBox(UserVaccinationResult);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(70, 260, 401, 71));
        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 101, 16));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 10, 101, 16));
        labelManufacturer2 = new QLabel(groupBox_4);
        labelManufacturer2->setObjectName("labelManufacturer2");
        labelManufacturer2->setGeometry(QRect(30, 40, 111, 16));
        labelBatchNumber2 = new QLabel(groupBox_4);
        labelBatchNumber2->setObjectName("labelBatchNumber2");
        labelBatchNumber2->setGeometry(QRect(240, 40, 111, 16));
        groupBox_5 = new QGroupBox(UserVaccinationResult);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(70, 410, 401, 71));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 101, 16));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 10, 101, 16));
        labelManufacturer1 = new QLabel(groupBox_5);
        labelManufacturer1->setObjectName("labelManufacturer1");
        labelManufacturer1->setGeometry(QRect(30, 40, 111, 16));
        labelBatchNumber1 = new QLabel(groupBox_5);
        labelBatchNumber1->setObjectName("labelBatchNumber1");
        labelBatchNumber1->setGeometry(QRect(240, 40, 111, 16));

        retranslateUi(UserVaccinationResult);

        QMetaObject::connectSlotsByName(UserVaccinationResult);
    } // setupUi

    void retranslateUi(QDialog *UserVaccinationResult)
    {
        UserVaccinationResult->setWindowTitle(QCoreApplication::translate("UserVaccinationResult", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("UserVaccinationResult", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserVaccinationResult", " View Vaccination Record", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserVaccinationResult", "Home", nullptr));
        groupBox_3->setTitle(QString());
        labelIconVaccine2->setText(QCoreApplication::translate("UserVaccinationResult", "icon", nullptr));
        labelVaccine1Name->setText(QCoreApplication::translate("UserVaccinationResult", "Vaccine Name", nullptr));
        label_14->setText(QCoreApplication::translate("UserVaccinationResult", "Dose1", nullptr));
        labelVaccine1Date->setText(QCoreApplication::translate("UserVaccinationResult", "Date", nullptr));
        label_11->setText(QCoreApplication::translate("UserVaccinationResult", "Covid-19 Vaccinations", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserVaccinationResult", "Log out", nullptr));
        label_7->setText(QCoreApplication::translate("UserVaccinationResult", " View Vaccination Record", nullptr));
        groupBox_6->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("UserVaccinationResult", "User Name", nullptr));
        labelIconUser->setText(QCoreApplication::translate("UserVaccinationResult", "Icon", nullptr));
        pushButtonViewProfile->setText(QCoreApplication::translate("UserVaccinationResult", "View Profile", nullptr));
        label_6->setText(QCoreApplication::translate("UserVaccinationResult", "My health account ", nullptr));
        groupBox->setTitle(QString());
        labelIconVaccine1->setText(QCoreApplication::translate("UserVaccinationResult", "icon", nullptr));
        labelVaccine2Name->setText(QCoreApplication::translate("UserVaccinationResult", "Vaccine Name", nullptr));
        label_3->setText(QCoreApplication::translate("UserVaccinationResult", "Dose2", nullptr));
        labelVaccine2Date->setText(QCoreApplication::translate("UserVaccinationResult", "Date", nullptr));
        groupBox_4->setTitle(QString());
        label->setText(QCoreApplication::translate("UserVaccinationResult", "Manufacturer", nullptr));
        label_2->setText(QCoreApplication::translate("UserVaccinationResult", "Batch Number", nullptr));
        labelManufacturer2->setText(QCoreApplication::translate("UserVaccinationResult", "TextLabel", nullptr));
        labelBatchNumber2->setText(QCoreApplication::translate("UserVaccinationResult", "TextLabel", nullptr));
        groupBox_5->setTitle(QString());
        label_4->setText(QCoreApplication::translate("UserVaccinationResult", "Manufacturer", nullptr));
        label_5->setText(QCoreApplication::translate("UserVaccinationResult", "Batch Number", nullptr));
        labelManufacturer1->setText(QCoreApplication::translate("UserVaccinationResult", "TextLabel", nullptr));
        labelBatchNumber1->setText(QCoreApplication::translate("UserVaccinationResult", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserVaccinationResult: public Ui_UserVaccinationResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERVACCINATIONRESULT_H
