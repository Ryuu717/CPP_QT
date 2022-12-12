/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LandingPage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButtonSignup;
    QPushButton *pushButtonLogin;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QLabel *labelLink;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LandingPage)
    {
        if (LandingPage->objectName().isEmpty())
            LandingPage->setObjectName("LandingPage");
        LandingPage->resize(628, 433);
        QFont font;
        font.setKerning(false);
        LandingPage->setFont(font);
        LandingPage->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        centralwidget = new QWidget(LandingPage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 331, 51));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 60, 341, 181));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } \n"
"\n"
"\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 121, 21));
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        pushButtonSignup = new QPushButton(groupBox);
        pushButtonSignup->setObjectName("pushButtonSignup");
        pushButtonSignup->setGeometry(QRect(120, 50, 100, 32));
        pushButtonSignup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(242, 189, 76); \n"
"    border: none;\n"
"	border-radius: 5px; \n"
"    color: rgb(0, 0, 0); \n"
"    font: 16px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"    background-color: rgb(245, 149, 66); \n"
"    border: none; \n"
"	border-radius: 5px; \n"
"    color: rgb(0, 43, 255); \n"
"}"));
        pushButtonLogin = new QPushButton(groupBox);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(120, 120, 100, 32));
        pushButtonLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(242, 189, 76); \n"
"    border: none;\n"
"	border-radius: 5px; \n"
"    color: rgb(0, 0, 0); \n"
"    font: 16px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"    background-color: rgb(245, 149, 66); \n"
"    border: none; \n"
"	border-radius: 5px; \n"
"    color: rgb(0, 43, 255); \n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 90, 51, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 260, 251, 121));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } \n"
"\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setKerning(false);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 11pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253,0)"));

        verticalLayout->addWidget(label_5);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(526, 341, 91, 41));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" }"));
        labelLink = new QLabel(groupBox_3);
        labelLink->setObjectName("labelLink");
        labelLink->setGeometry(QRect(12, 12, 67, 17));
        labelLink->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229, 0);"));
        LandingPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LandingPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 628, 22));
        LandingPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LandingPage);
        statusbar->setObjectName("statusbar");
        LandingPage->setStatusBar(statusbar);

        retranslateUi(LandingPage);

        QMetaObject::connectSlotsByName(LandingPage);
    } // setupUi

    void retranslateUi(QMainWindow *LandingPage)
    {
        LandingPage->setWindowTitle(QCoreApplication::translate("LandingPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LandingPage", "My health account ", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("LandingPage", "Login or Signup ", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonSignup->setToolTip(QCoreApplication::translate("LandingPage", "ToolTip", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonSignup->setText(QCoreApplication::translate("LandingPage", "Signup", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LandingPage", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("LandingPage", "or", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("LandingPage", "What I can do?", nullptr));
        label_5->setText(QCoreApplication::translate("LandingPage", "View:                  RAT test results\n"
"View:                  Vaccination record\n"
"Request:            Vaccine Pass\n"
"Report:               RAT test result\n"
"Report:               Issues", nullptr));
        groupBox_3->setTitle(QString());
        labelLink->setText(QCoreApplication::translate("LandingPage", "External Link", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LandingPage: public Ui_LandingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H
