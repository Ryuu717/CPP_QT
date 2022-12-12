/********************************************************************************
** Form generated from reading UI file 'adminmain.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAIN_H
#define UI_ADMINMAIN_H

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

class Ui_AdminMain
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDashboard;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonUsers;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButtonReports;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonLogs;
    QLabel *labelUserList;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonMyHealthAccount;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *labelAdmin;
    QLabel *label_17;
    QPushButton *pushButtonLogout;

    void setupUi(QDialog *AdminMain)
    {
        if (AdminMain->objectName().isEmpty())
            AdminMain->setObjectName("AdminMain");
        AdminMain->resize(711, 370);
        AdminMain->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        gridLayoutWidget = new QWidget(AdminMain);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(150, 110, 541, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(AdminMain);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(13, 84, 120, 271));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" }"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        pushButtonDashboard = new QPushButton(groupBox_2);
        pushButtonDashboard->setObjectName("pushButtonDashboard");
        pushButtonDashboard->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 16px;\n"
"	text-align: left;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"	background-color: rgb(0, 0, 0, 0.1); \n"
"	border: none; \n"
"	color: rgb(0, 43, 255); \n"
"}\n"
""));

        verticalLayout->addWidget(pushButtonDashboard);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButtonUsers = new QPushButton(groupBox_2);
        pushButtonUsers->setObjectName("pushButtonUsers");
        pushButtonUsers->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 16px;\n"
"	text-align: left;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"	background-color: rgb(0, 0, 0, 0.1); \n"
"	border: none; \n"
"	color: rgb(0, 43, 255); \n"
"}\n"
""));

        verticalLayout->addWidget(pushButtonUsers);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButtonReports = new QPushButton(groupBox_2);
        pushButtonReports->setObjectName("pushButtonReports");
        pushButtonReports->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 16px;\n"
"	text-align: left;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"	background-color: rgb(0, 0, 0, 0.1); \n"
"	border: none; \n"
"	color: rgb(0, 43, 255); \n"
"}\n"
""));

        verticalLayout->addWidget(pushButtonReports);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButtonLogs = new QPushButton(groupBox_2);
        pushButtonLogs->setObjectName("pushButtonLogs");
        pushButtonLogs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 16px;\n"
"	text-align: left;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"	background-color: rgb(0, 0, 0, 0.1); \n"
"	border: none; \n"
"	color: rgb(0, 43, 255); \n"
"}\n"
""));

        verticalLayout->addWidget(pushButtonLogs);

        labelUserList = new QLabel(AdminMain);
        labelUserList->setObjectName("labelUserList");
        labelUserList->setGeometry(QRect(149, 82, 141, 21));
        labelUserList->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";\n"
"background-color: rgb(104, 161, 229);"));
        layoutWidget = new QWidget(AdminMain);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(13, 10, 681, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonMyHealthAccount = new QPushButton(layoutWidget);
        pushButtonMyHealthAccount->setObjectName("pushButtonMyHealthAccount");
        pushButtonMyHealthAccount->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0,0.1); \n"
"	border: none; \n"
"	color: rgb(0, 0, 0); \n"
"	font: 24px;\n"
"	text-align: left;\n"
"} \n"
"\n"
""));

        horizontalLayout->addWidget(pushButtonMyHealthAccount);

        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox_6 = new QGroupBox(layoutWidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName("gridLayout_2");
        labelAdmin = new QLabel(groupBox_6);
        labelAdmin->setObjectName("labelAdmin");
        labelAdmin->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        gridLayout_2->addWidget(labelAdmin, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName("label_17");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253,0)"));

        gridLayout_2->addWidget(label_17, 0, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_6);

        pushButtonLogout = new QPushButton(layoutWidget);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(242, 189, 76); \n"
"    border: none;\n"
"     border-radius: 5px; \n"
"    color: rgb(0, 0, 0); \n"
"    font: 16px;\n"
"    padding: 5 20px;\n"
"} \n"
"\n"
"QPushButton:hover { \n"
"    background-color: rgb(245, 149, 66); \n"
"    border: none; \n"
"    border-radius: 5px; \n"
"    color: rgb(0, 43, 255); \n"
"}"));

        horizontalLayout->addWidget(pushButtonLogout);


        retranslateUi(AdminMain);

        QMetaObject::connectSlotsByName(AdminMain);
    } // setupUi

    void retranslateUi(QDialog *AdminMain)
    {
        AdminMain->setWindowTitle(QCoreApplication::translate("AdminMain", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        pushButtonDashboard->setText(QCoreApplication::translate("AdminMain", "1. Dashboard", nullptr));
        pushButtonUsers->setText(QCoreApplication::translate("AdminMain", "2. Users", nullptr));
        pushButtonReports->setText(QCoreApplication::translate("AdminMain", "3. Reports", nullptr));
        pushButtonLogs->setText(QCoreApplication::translate("AdminMain", "4. Logs", nullptr));
        labelUserList->setText(QCoreApplication::translate("AdminMain", "Dashboard", nullptr));
        pushButtonMyHealthAccount->setText(QCoreApplication::translate("AdminMain", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelAdmin->setText(QCoreApplication::translate("AdminMain", "Icon", nullptr));
        label_17->setText(QCoreApplication::translate("AdminMain", "Admin", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("AdminMain", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMain: public Ui_AdminMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAIN_H
