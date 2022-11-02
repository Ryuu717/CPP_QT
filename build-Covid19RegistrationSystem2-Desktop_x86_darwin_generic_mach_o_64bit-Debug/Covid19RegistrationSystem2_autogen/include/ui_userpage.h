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
    QLabel *label;
    QGroupBox *groupBox_6;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButtonProfile;
    QPushButton *pushButtonLogout;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonCovid19TestResult;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_4;

    void setupUi(QDialog *UserPage)
    {
        if (UserPage->objectName().isEmpty())
            UserPage->setObjectName("UserPage");
        UserPage->resize(835, 367);
        label = new QLabel(UserPage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        groupBox_6 = new QGroupBox(UserPage);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(580, 10, 131, 41));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(50, 0, 91, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(50, 20, 71, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 0, 41, 16));
        pushButtonProfile = new QPushButton(groupBox_6);
        pushButtonProfile->setObjectName("pushButtonProfile");
        pushButtonProfile->setGeometry(QRect(10, 10, 16, 32));
        pushButtonLogout = new QPushButton(UserPage);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(730, 10, 100, 32));
        layoutWidget = new QWidget(UserPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 100, 681, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 10, 141, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 141, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 10, 41, 16));
        pushButtonCovid19TestResult = new QPushButton(groupBox);
        pushButtonCovid19TestResult->setObjectName("pushButtonCovid19TestResult");
        pushButtonCovid19TestResult->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 10, 141, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 40, 141, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(170, 10, 41, 16));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 60, 100, 32));

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
        label_9->setGeometry(QRect(10, 40, 141, 16));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(170, 10, 41, 16));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName("groupBox_5");
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 10, 141, 16));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 40, 141, 16));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(170, 10, 41, 16));
        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName("groupBox_4");
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 10, 141, 16));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 40, 141, 16));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("font: 12pt \".AppleSystemUIFont\";"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(170, 10, 41, 16));
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(110, 60, 100, 32));

        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);


        retranslateUi(UserPage);

        QMetaObject::connectSlotsByName(UserPage);
    } // setupUi

    void retranslateUi(QDialog *UserPage)
    {
        UserPage->setWindowTitle(QCoreApplication::translate("UserPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserPage", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        label_17->setText(QCoreApplication::translate("UserPage", "User Name", nullptr));
        label_18->setText(QCoreApplication::translate("UserPage", "View Profile", nullptr));
        label_19->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonProfile->setText(QCoreApplication::translate("UserPage", "PushButton", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserPage", "Log out", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("UserPage", " Covid-19 Test Result", nullptr));
        label_3->setText(QCoreApplication::translate("UserPage", "Explanation", nullptr));
        label_4->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButtonCovid19TestResult->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("UserPage", " Vaccination Record", nullptr));
        label_6->setText(QCoreApplication::translate("UserPage", "Explanation", nullptr));
        label_7->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_3->setTitle(QString());
        label_8->setText(QCoreApplication::translate("UserPage", " Vaccine Pass", nullptr));
        label_9->setText(QCoreApplication::translate("UserPage", "Explanation", nullptr));
        label_10->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_5->setTitle(QString());
        label_14->setText(QCoreApplication::translate("UserPage", " RAT Result", nullptr));
        label_15->setText(QCoreApplication::translate("UserPage", "Explanation", nullptr));
        label_16->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButton_5->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
        groupBox_4->setTitle(QString());
        label_11->setText(QCoreApplication::translate("UserPage", " Report Issue", nullptr));
        label_12->setText(QCoreApplication::translate("UserPage", "Explanation", nullptr));
        label_13->setText(QCoreApplication::translate("UserPage", "Icon", nullptr));
        pushButton_4->setText(QCoreApplication::translate("UserPage", "Detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPage: public Ui_UserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
