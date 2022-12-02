/********************************************************************************
** Form generated from reading UI file 'adminusers.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUSERS_H
#define UI_ADMINUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminUsers
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QSpinBox *spinBoxUserID;
    QPushButton *pushButtonEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonMyHealthAccount;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdmin;
    QLabel *label_17;
    QPushButton *pushButtonLogout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDashboard;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonUsers;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButtonReports;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonLogs;
    QTableView *tableView;
    QLabel *labelUserList_2;

    void setupUi(QDialog *AdminUsers)
    {
        if (AdminUsers->objectName().isEmpty())
            AdminUsers->setObjectName("AdminUsers");
        AdminUsers->resize(660, 370);
        groupBox = new QGroupBox(AdminUsers);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(430, 80, 201, 31));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 7, 58, 16));
        spinBoxUserID = new QSpinBox(groupBox);
        spinBoxUserID->setObjectName("spinBoxUserID");
        spinBoxUserID->setGeometry(QRect(67, 5, 42, 22));
        spinBoxUserID->setMinimum(1);
        pushButtonEdit = new QPushButton(groupBox);
        pushButtonEdit->setObjectName("pushButtonEdit");
        pushButtonEdit->setGeometry(QRect(130, 0, 61, 32));
        layoutWidget = new QWidget(AdminUsers);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 615, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_3->addWidget(pushButtonMyHealthAccount);

        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox_6 = new QGroupBox(layoutWidget);
        groupBox_6->setObjectName("groupBox_6");
        horizontalLayout_2 = new QHBoxLayout(groupBox_6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelAdmin = new QLabel(groupBox_6);
        labelAdmin->setObjectName("labelAdmin");

        horizontalLayout->addWidget(labelAdmin);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName("label_17");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("font: 14pt \".AppleSystemUIFont\";"));

        horizontalLayout->addWidget(label_17);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(groupBox_6);

        pushButtonLogout = new QPushButton(layoutWidget);
        pushButtonLogout->setObjectName("pushButtonLogout");

        horizontalLayout_3->addWidget(pushButtonLogout);

        groupBox_2 = new QGroupBox(AdminUsers);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(13, 84, 120, 265));
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

        verticalSpacer_4 = new QSpacerItem(17, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

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

        verticalSpacer_5 = new QSpacerItem(17, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

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

        verticalSpacer_6 = new QSpacerItem(17, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

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

        tableView = new QTableView(AdminUsers);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(149, 120, 481, 241));
        labelUserList_2 = new QLabel(AdminUsers);
        labelUserList_2->setObjectName("labelUserList_2");
        labelUserList_2->setGeometry(QRect(149, 84, 62, 19));
        labelUserList_2->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));

        retranslateUi(AdminUsers);

        QMetaObject::connectSlotsByName(AdminUsers);
    } // setupUi

    void retranslateUi(QDialog *AdminUsers)
    {
        AdminUsers->setWindowTitle(QCoreApplication::translate("AdminUsers", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("AdminUsers", "User ID:", nullptr));
        pushButtonEdit->setText(QCoreApplication::translate("AdminUsers", "Edit", nullptr));
        pushButtonMyHealthAccount->setText(QCoreApplication::translate("AdminUsers", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelAdmin->setText(QCoreApplication::translate("AdminUsers", "Icon", nullptr));
        label_17->setText(QCoreApplication::translate("AdminUsers", "Admin", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("AdminUsers", "Log out", nullptr));
        groupBox_2->setTitle(QString());
        pushButtonDashboard->setText(QCoreApplication::translate("AdminUsers", "1. Dashboard", nullptr));
        pushButtonUsers->setText(QCoreApplication::translate("AdminUsers", "2. Users", nullptr));
        pushButtonReports->setText(QCoreApplication::translate("AdminUsers", "3. Reports", nullptr));
        pushButtonLogs->setText(QCoreApplication::translate("AdminUsers", "4. Logs", nullptr));
        labelUserList_2->setText(QCoreApplication::translate("AdminUsers", "User List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUsers: public Ui_AdminUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUSERS_H
