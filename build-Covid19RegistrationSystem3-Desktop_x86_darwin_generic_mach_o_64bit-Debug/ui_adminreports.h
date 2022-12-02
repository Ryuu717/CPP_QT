/********************************************************************************
** Form generated from reading UI file 'adminreports.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREPORTS_H
#define UI_ADMINREPORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminReports
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonMyHealthAccount;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdmin;
    QLabel *label_17;
    QPushButton *pushButtonLogout;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonDashboard;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonUsers;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButtonReports;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonLogs;
    QLabel *labelUserList;
    QTableView *tableView;

    void setupUi(QDialog *AdminReports)
    {
        if (AdminReports->objectName().isEmpty())
            AdminReports->setObjectName("AdminReports");
        AdminReports->resize(723, 374);
        verticalLayout = new QVBoxLayout(AdminReports);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButtonMyHealthAccount = new QPushButton(AdminReports);
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

        groupBox_6 = new QGroupBox(AdminReports);
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

        pushButtonLogout = new QPushButton(AdminReports);
        pushButtonLogout->setObjectName("pushButtonLogout");

        horizontalLayout_3->addWidget(pushButtonLogout);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(AdminReports);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
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

        verticalLayout_2->addWidget(pushButtonDashboard);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

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

        verticalLayout_2->addWidget(pushButtonUsers);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

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

        verticalLayout_2->addWidget(pushButtonReports);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

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

        verticalLayout_2->addWidget(pushButtonLogs);


        gridLayout->addWidget(groupBox_2, 0, 0, 2, 1);

        labelUserList = new QLabel(AdminReports);
        labelUserList->setObjectName("labelUserList");
        labelUserList->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(labelUserList, 0, 1, 1, 1);

        tableView = new QTableView(AdminReports);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(AdminReports);

        QMetaObject::connectSlotsByName(AdminReports);
    } // setupUi

    void retranslateUi(QDialog *AdminReports)
    {
        AdminReports->setWindowTitle(QCoreApplication::translate("AdminReports", "Dialog", nullptr));
        pushButtonMyHealthAccount->setText(QCoreApplication::translate("AdminReports", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelAdmin->setText(QCoreApplication::translate("AdminReports", "Icon", nullptr));
        label_17->setText(QCoreApplication::translate("AdminReports", "Admin", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("AdminReports", "Log out", nullptr));
        groupBox_2->setTitle(QString());
        pushButtonDashboard->setText(QCoreApplication::translate("AdminReports", "1. Dashboard", nullptr));
        pushButtonUsers->setText(QCoreApplication::translate("AdminReports", "2. Users", nullptr));
        pushButtonReports->setText(QCoreApplication::translate("AdminReports", "3. Reports", nullptr));
        pushButtonLogs->setText(QCoreApplication::translate("AdminReports", "4. Logs", nullptr));
        labelUserList->setText(QCoreApplication::translate("AdminReports", "Reports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminReports: public Ui_AdminReports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREPORTS_H
