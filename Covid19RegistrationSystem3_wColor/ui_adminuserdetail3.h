/********************************************************************************
** Form generated from reading UI file 'adminuserdetail3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUSERDETAIL3_H
#define UI_ADMINUSERDETAIL3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminUserDetail3
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonMyHealthAccount;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QLabel *labelIconUser;
    QLabel *label_17;
    QPushButton *pushButtonLogout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDashboard;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonUsers;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButtonReports;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonLogs;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_7;
    QPushButton *pushButtonUpdate3;
    QLabel *label_15;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_5;
    QLabel *labelRATKitImage2;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *lineEditRAT1Name;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *lineEditRAT1Date;
    QLineEdit *lineEditRAT1Result;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_4;
    QLabel *labelRATKitImage1;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *lineEditRAT2Name;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *lineEditRAT2Date;
    QLineEdit *lineEditRAT2Result;
    QLabel *label_12;
    QGroupBox *groupBox;
    QGroupBox *groupBox_4;
    QLabel *labelQRCode;
    QPushButton *pushButtonUpdate;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelNHINumberTitle;
    QLineEdit *lineEditNHINumber;
    QLabel *label_10;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_2;
    QLineEdit *lineEditFirstName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QLineEdit *lineEditLastName;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditBirthday;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEditEmail;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEditPhone;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_22;
    QPushButton *pushButtonUpdateQRNHI;
    QPushButton *pushButtonDeletepushButtonQRNHI;
    QLabel *labelDashboard_2;
    QGroupBox *groupBox_3;
    QLabel *labelVaccinePass;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_23;
    QPushButton *pushButtonUpdateQRVaccinePass;
    QPushButton *pushButtonDeleteQRVaccinePass;
    QLabel *label_13;
    QLabel *labelIssuedDate;
    QLabel *label;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_10;
    QLabel *labelIconVaccine1;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelvaccine2Name;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEditDose2Date;
    QLabel *label_11;
    QGroupBox *groupBox_13;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_19;
    QLineEdit *lineEditDose2Manufacturer;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_20;
    QLineEdit *lineEditDose2BatchNumber;
    QGroupBox *groupBox_11;
    QLabel *labelIconVaccine2;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelvaccine1Name;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEditDose1Date;
    QGroupBox *groupBox_14;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_23;
    QLineEdit *lineEditDose1Manufacturer;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_24;
    QLineEdit *lineEditDose1BatchNumber;
    QPushButton *pushButtonUpdate2;
    QLabel *label_8;

    void setupUi(QDialog *AdminUserDetail3)
    {
        if (AdminUserDetail3->objectName().isEmpty())
            AdminUserDetail3->setObjectName("AdminUserDetail3");
        AdminUserDetail3->resize(936, 2154);
        AdminUserDetail3->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 161, 229);"));
        gridLayout = new QGridLayout(AdminUserDetail3);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonMyHealthAccount = new QPushButton(AdminUserDetail3);
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

        groupBox_6 = new QGroupBox(AdminUserDetail3);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setObjectName("gridLayout_3");
        labelIconUser = new QLabel(groupBox_6);
        labelIconUser->setObjectName("labelIconUser");
        labelIconUser->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        gridLayout_3->addWidget(labelIconUser, 0, 0, 1, 1);

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

        gridLayout_3->addWidget(label_17, 0, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_6);

        pushButtonLogout = new QPushButton(AdminUserDetail3);
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


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(AdminUserDetail3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
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


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 138, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        scrollArea = new QScrollArea(AdminUserDetail3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 786, 2077));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setMinimumSize(QSize(500, 350));
        groupBox_7->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
        pushButtonUpdate3 = new QPushButton(groupBox_7);
        pushButtonUpdate3->setObjectName("pushButtonUpdate3");
        pushButtonUpdate3->setGeometry(QRect(510, 260, 141, 32));
        pushButtonUpdate3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_15 = new QLabel(groupBox_7);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(21, 20, 216, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253, 0)"));
        groupBox_12 = new QGroupBox(groupBox_7);
        groupBox_12->setObjectName("groupBox_12");
        groupBox_12->setGeometry(QRect(81, 208, 380, 87));
        groupBox_12->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        gridLayout_5 = new QGridLayout(groupBox_12);
        gridLayout_5->setObjectName("gridLayout_5");
        labelRATKitImage2 = new QLabel(groupBox_12);
        labelRATKitImage2->setObjectName("labelRATKitImage2");
        labelRATKitImage2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        gridLayout_5->addWidget(labelRATKitImage2, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        lineEditRAT1Name = new QLineEdit(groupBox_12);
        lineEditRAT1Name->setObjectName("lineEditRAT1Name");

        verticalLayout_19->addWidget(lineEditRAT1Name);

        label_16 = new QLabel(groupBox_12);
        label_16->setObjectName("label_16");

        verticalLayout_19->addWidget(label_16);


        horizontalLayout_17->addLayout(verticalLayout_19);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_13);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        lineEditRAT1Date = new QLineEdit(groupBox_12);
        lineEditRAT1Date->setObjectName("lineEditRAT1Date");

        verticalLayout_20->addWidget(lineEditRAT1Date);

        lineEditRAT1Result = new QLineEdit(groupBox_12);
        lineEditRAT1Result->setObjectName("lineEditRAT1Result");

        verticalLayout_20->addWidget(lineEditRAT1Result);


        horizontalLayout_17->addLayout(verticalLayout_20);


        gridLayout_5->addLayout(horizontalLayout_17, 0, 1, 1, 1);

        groupBox_9 = new QGroupBox(groupBox_7);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setGeometry(QRect(81, 106, 380, 87));
        groupBox_9->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        gridLayout_4 = new QGridLayout(groupBox_9);
        gridLayout_4->setObjectName("gridLayout_4");
        labelRATKitImage1 = new QLabel(groupBox_9);
        labelRATKitImage1->setObjectName("labelRATKitImage1");
        labelRATKitImage1->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        gridLayout_4->addWidget(labelRATKitImage1, 0, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        lineEditRAT2Name = new QLineEdit(groupBox_9);
        lineEditRAT2Name->setObjectName("lineEditRAT2Name");

        verticalLayout_17->addWidget(lineEditRAT2Name);

        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_17->addWidget(label_9);


        horizontalLayout_16->addLayout(verticalLayout_17);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_12);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        lineEditRAT2Date = new QLineEdit(groupBox_9);
        lineEditRAT2Date->setObjectName("lineEditRAT2Date");

        verticalLayout_18->addWidget(lineEditRAT2Date);

        lineEditRAT2Result = new QLineEdit(groupBox_9);
        lineEditRAT2Result->setObjectName("lineEditRAT2Result");

        verticalLayout_18->addWidget(lineEditRAT2Result);


        horizontalLayout_16->addLayout(verticalLayout_18);


        gridLayout_4->addLayout(horizontalLayout_16, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(81, 71, 76, 19));
        label_12->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253, 0)"));

        gridLayout_2->addWidget(groupBox_7, 4, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(500, 600));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border-radius: 5px; \n"
"	background-color: rgb(242, 248, 253);\n"
" } "));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(12, 52, 701, 531));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0);"));
        labelQRCode = new QLabel(groupBox_4);
        labelQRCode->setObjectName("labelQRCode");
        labelQRCode->setGeometry(QRect(210, 70, 301, 251));
        labelQRCode->setAutoFillBackground(false);
        labelQRCode->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0)"));
        labelQRCode->setAlignment(Qt::AlignCenter);
        pushButtonUpdate = new QPushButton(groupBox_4);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(553, 490, 121, 32));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(300, 10, 127, 55));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelNHINumberTitle = new QLabel(layoutWidget);
        labelNHINumberTitle->setObjectName("labelNHINumberTitle");
        QFont font2;
        font2.setBold(true);
        labelNHINumberTitle->setFont(font2);
        labelNHINumberTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        labelNHINumberTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(labelNHINumberTitle);

        lineEditNHINumber = new QLineEdit(layoutWidget);
        lineEditNHINumber->setObjectName("lineEditNHINumber");
        lineEditNHINumber->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_7->addWidget(lineEditNHINumber);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(201, 721, 37, 16));
        label_10->setFont(font2);
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(31, 350, 621, 110));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0)"));

        verticalLayout_13->addWidget(label_2);

        lineEditFirstName = new QLineEdit(layoutWidget1);
        lineEditFirstName->setObjectName("lineEditFirstName");
        lineEditFirstName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_13->addWidget(lineEditFirstName);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName("label_18");
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0)\n"
""));

        verticalLayout_3->addWidget(label_18);

        lineEditLastName = new QLineEdit(layoutWidget1);
        lineEditLastName->setObjectName("lineEditLastName");
        lineEditLastName->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_3->addWidget(lineEditLastName);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_14->addLayout(horizontalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0)"));

        verticalLayout_4->addWidget(label_4);

        lineEditBirthday = new QLineEdit(layoutWidget1);
        lineEditBirthday->setObjectName("lineEditBirthday");
        lineEditBirthday->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_4->addWidget(lineEditBirthday);


        verticalLayout_14->addLayout(verticalLayout_4);


        horizontalLayout_13->addLayout(verticalLayout_14);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0)\n"
""));

        verticalLayout_5->addWidget(label_3);

        lineEditEmail = new QLineEdit(layoutWidget1);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_5->addWidget(lineEditEmail);


        verticalLayout_21->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,0)"));

        verticalLayout_6->addWidget(label_5);

        lineEditPhone = new QLineEdit(layoutWidget1);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_6->addWidget(lineEditPhone);


        verticalLayout_21->addLayout(verticalLayout_6);


        horizontalLayout_13->addLayout(verticalLayout_21);

        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(520, 260, 160, 74));
        verticalLayout_22 = new QVBoxLayout(layoutWidget2);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdateQRNHI = new QPushButton(layoutWidget2);
        pushButtonUpdateQRNHI->setObjectName("pushButtonUpdateQRNHI");
        pushButtonUpdateQRNHI->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_22->addWidget(pushButtonUpdateQRNHI);

        pushButtonDeletepushButtonQRNHI = new QPushButton(layoutWidget2);
        pushButtonDeletepushButtonQRNHI->setObjectName("pushButtonDeletepushButtonQRNHI");
        pushButtonDeletepushButtonQRNHI->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_22->addWidget(pushButtonDeletepushButtonQRNHI);

        labelDashboard_2 = new QLabel(groupBox);
        labelDashboard_2->setObjectName("labelDashboard_2");
        labelDashboard_2->setGeometry(QRect(11, 21, 631, 19));
        labelDashboard_2->setFont(font1);
        labelDashboard_2->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253,0)"));

        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMinimumSize(QSize(500, 400));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
        labelVaccinePass = new QLabel(groupBox_3);
        labelVaccinePass->setObjectName("labelVaccinePass");
        labelVaccinePass->setGeometry(QRect(170, 90, 301, 251));
        labelVaccinePass->setAutoFillBackground(false);
        labelVaccinePass->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        labelVaccinePass->setAlignment(Qt::AlignCenter);
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(510, 270, 160, 74));
        verticalLayout_23 = new QVBoxLayout(layoutWidget3);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdateQRVaccinePass = new QPushButton(layoutWidget3);
        pushButtonUpdateQRVaccinePass->setObjectName("pushButtonUpdateQRVaccinePass");
        pushButtonUpdateQRVaccinePass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_23->addWidget(pushButtonUpdateQRVaccinePass);

        pushButtonDeleteQRVaccinePass = new QPushButton(layoutWidget3);
        pushButtonDeleteQRVaccinePass->setObjectName("pushButtonDeleteQRVaccinePass");
        pushButtonDeleteQRVaccinePass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_23->addWidget(pushButtonDeleteQRVaccinePass);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(21, 11, 146, 22));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253, 0)"));
        labelIssuedDate = new QLabel(groupBox_3);
        labelIssuedDate->setObjectName("labelIssuedDate");
        labelIssuedDate->setGeometry(QRect(106, 61, 261, 16));
        labelIssuedDate->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(41, 61, 47, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        gridLayout_2->addWidget(groupBox_3, 3, 0, 1, 1);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(500, 400));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253)"));
        groupBox_10 = new QGroupBox(groupBox_5);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setGeometry(QRect(40, 90, 401, 71));
        groupBox_10->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        labelIconVaccine1 = new QLabel(groupBox_10);
        labelIconVaccine1->setObjectName("labelIconVaccine1");
        labelIconVaccine1->setGeometry(QRect(20, 10, 31, 41));
        labelIconVaccine1->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));
        layoutWidget4 = new QWidget(groupBox_10);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(71, 4, 301, 51));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        labelvaccine2Name = new QLabel(layoutWidget4);
        labelvaccine2Name->setObjectName("labelvaccine2Name");
        labelvaccine2Name->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        verticalLayout_8->addWidget(labelvaccine2Name);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        verticalLayout_8->addWidget(label_6);


        horizontalLayout_12->addLayout(verticalLayout_8);

        horizontalSpacer_7 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        lineEditDose2Date = new QLineEdit(layoutWidget4);
        lineEditDose2Date->setObjectName("lineEditDose2Date");

        horizontalLayout_12->addWidget(lineEditDose2Date);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 60, 281, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 16pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253,0)"));
        groupBox_13 = new QGroupBox(groupBox_5);
        groupBox_13->setObjectName("groupBox_13");
        groupBox_13->setGeometry(QRect(40, 160, 401, 81));
        groupBox_13->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        layoutWidget5 = new QWidget(groupBox_13);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(20, 10, 361, 57));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_19 = new QLabel(layoutWidget5);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        verticalLayout_9->addWidget(label_19);

        lineEditDose2Manufacturer = new QLineEdit(layoutWidget5);
        lineEditDose2Manufacturer->setObjectName("lineEditDose2Manufacturer");
        lineEditDose2Manufacturer->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        verticalLayout_9->addWidget(lineEditDose2Manufacturer);


        horizontalLayout_10->addLayout(verticalLayout_9);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_20 = new QLabel(layoutWidget5);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253,0)"));

        verticalLayout_10->addWidget(label_20);

        lineEditDose2BatchNumber = new QLineEdit(layoutWidget5);
        lineEditDose2BatchNumber->setObjectName("lineEditDose2BatchNumber");
        lineEditDose2BatchNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_10->addWidget(lineEditDose2BatchNumber);


        horizontalLayout_10->addLayout(verticalLayout_10);

        groupBox_11 = new QGroupBox(groupBox_5);
        groupBox_11->setObjectName("groupBox_11");
        groupBox_11->setGeometry(QRect(40, 240, 401, 71));
        groupBox_11->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        labelIconVaccine2 = new QLabel(groupBox_11);
        labelIconVaccine2->setObjectName("labelIconVaccine2");
        labelIconVaccine2->setGeometry(QRect(20, 5, 31, 41));
        labelIconVaccine2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        layoutWidget6 = new QWidget(groupBox_11);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(70, 10, 302, 51));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        labelvaccine1Name = new QLabel(layoutWidget6);
        labelvaccine1Name->setObjectName("labelvaccine1Name");
        labelvaccine1Name->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_12->addWidget(labelvaccine1Name);

        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_12->addWidget(label_14);


        horizontalLayout_11->addLayout(verticalLayout_12);

        horizontalSpacer_10 = new QSpacerItem(68, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        lineEditDose1Date = new QLineEdit(layoutWidget6);
        lineEditDose1Date->setObjectName("lineEditDose1Date");
        lineEditDose1Date->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        horizontalLayout_11->addWidget(lineEditDose1Date);

        groupBox_14 = new QGroupBox(groupBox_5);
        groupBox_14->setObjectName("groupBox_14");
        groupBox_14->setGeometry(QRect(40, 310, 401, 71));
        groupBox_14->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));
        layoutWidget_10 = new QWidget(groupBox_14);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(20, 10, 361, 57));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_23 = new QLabel(layoutWidget_10);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_15->addWidget(label_23);

        lineEditDose1Manufacturer = new QLineEdit(layoutWidget_10);
        lineEditDose1Manufacturer->setObjectName("lineEditDose1Manufacturer");
        lineEditDose1Manufacturer->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_15->addWidget(lineEditDose1Manufacturer);


        horizontalLayout_15->addLayout(verticalLayout_15);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_11);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_24 = new QLabel(layoutWidget_10);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_16->addWidget(label_24);

        lineEditDose1BatchNumber = new QLineEdit(layoutWidget_10);
        lineEditDose1BatchNumber->setObjectName("lineEditDose1BatchNumber");
        lineEditDose1BatchNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 248, 253, 0)"));

        verticalLayout_16->addWidget(lineEditDose1BatchNumber);


        horizontalLayout_15->addLayout(verticalLayout_16);

        pushButtonUpdate2 = new QPushButton(groupBox_5);
        pushButtonUpdate2->setObjectName("pushButtonUpdate2");
        pushButtonUpdate2->setGeometry(QRect(480, 350, 111, 32));
        pushButtonUpdate2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(21, 21, 481, 22));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"background-color: rgb(242, 248, 253,0)"));

        gridLayout_2->addWidget(groupBox_5, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 1, 1, 1);


        retranslateUi(AdminUserDetail3);

        QMetaObject::connectSlotsByName(AdminUserDetail3);
    } // setupUi

    void retranslateUi(QDialog *AdminUserDetail3)
    {
        AdminUserDetail3->setWindowTitle(QCoreApplication::translate("AdminUserDetail3", "Dialog", nullptr));
        pushButtonMyHealthAccount->setText(QCoreApplication::translate("AdminUserDetail3", "My health account ", nullptr));
        groupBox_6->setTitle(QString());
        labelIconUser->setText(QCoreApplication::translate("AdminUserDetail3", "Icon", nullptr));
        label_17->setText(QCoreApplication::translate("AdminUserDetail3", "Admin", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("AdminUserDetail3", "Log out", nullptr));
        groupBox_2->setTitle(QString());
        pushButtonDashboard->setText(QCoreApplication::translate("AdminUserDetail3", "1. Dashboard", nullptr));
        pushButtonUsers->setText(QCoreApplication::translate("AdminUserDetail3", "2. Users", nullptr));
        pushButtonReports->setText(QCoreApplication::translate("AdminUserDetail3", "3. Reports", nullptr));
        pushButtonLogs->setText(QCoreApplication::translate("AdminUserDetail3", "4. Logs", nullptr));
        groupBox_7->setTitle(QString());
        pushButtonUpdate3->setText(QCoreApplication::translate("AdminUserDetail3", "Update", nullptr));
        label_15->setText(QCoreApplication::translate("AdminUserDetail3", "4. View Covid-19 Test Result", nullptr));
        groupBox_12->setTitle(QString());
        labelRATKitImage2->setText(QCoreApplication::translate("AdminUserDetail3", "icon", nullptr));
        label_16->setText(QCoreApplication::translate("AdminUserDetail3", "Test1", nullptr));
        groupBox_9->setTitle(QString());
        labelRATKitImage1->setText(QCoreApplication::translate("AdminUserDetail3", "icon", nullptr));
        label_9->setText(QCoreApplication::translate("AdminUserDetail3", "Test2", nullptr));
        label_12->setText(QCoreApplication::translate("AdminUserDetail3", "RAT Result", nullptr));
        groupBox->setTitle(QString());
        groupBox_4->setTitle(QString());
        labelQRCode->setText(QCoreApplication::translate("AdminUserDetail3", "NHI Number", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("AdminUserDetail3", "Update", nullptr));
        labelNHINumberTitle->setText(QCoreApplication::translate("AdminUserDetail3", "NHI Number", nullptr));
        label_10->setText(QCoreApplication::translate("AdminUserDetail3", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AdminUserDetail3", "First Name", nullptr));
        label_18->setText(QCoreApplication::translate("AdminUserDetail3", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("AdminUserDetail3", "Date of Birth", nullptr));
        label_3->setText(QCoreApplication::translate("AdminUserDetail3", "Email Address", nullptr));
        label_5->setText(QCoreApplication::translate("AdminUserDetail3", "Mobile Number", nullptr));
        pushButtonUpdateQRNHI->setText(QCoreApplication::translate("AdminUserDetail3", "Update QR Code", nullptr));
        pushButtonDeletepushButtonQRNHI->setText(QCoreApplication::translate("AdminUserDetail3", "Delete QR Code", nullptr));
        labelDashboard_2->setText(QCoreApplication::translate("AdminUserDetail3", "1. Profile", nullptr));
        groupBox_3->setTitle(QString());
        labelVaccinePass->setText(QCoreApplication::translate("AdminUserDetail3", "Vaccine Pass", nullptr));
        pushButtonUpdateQRVaccinePass->setText(QCoreApplication::translate("AdminUserDetail3", "Update QR Code", nullptr));
        pushButtonDeleteQRVaccinePass->setText(QCoreApplication::translate("AdminUserDetail3", "Delete QR Code", nullptr));
        label_13->setText(QCoreApplication::translate("AdminUserDetail3", "3. Vaccination Pass", nullptr));
        labelIssuedDate->setText(QCoreApplication::translate("AdminUserDetail3", "dd/mm/yy", nullptr));
        label->setText(QCoreApplication::translate("AdminUserDetail3", "Issued: ", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_10->setTitle(QString());
        labelIconVaccine1->setText(QCoreApplication::translate("AdminUserDetail3", "icon", nullptr));
        labelvaccine2Name->setText(QCoreApplication::translate("AdminUserDetail3", "Vaccine2 Name", nullptr));
        label_6->setText(QCoreApplication::translate("AdminUserDetail3", "Dose2", nullptr));
        label_11->setText(QCoreApplication::translate("AdminUserDetail3", "Covid-19 Vaccinations", nullptr));
        groupBox_13->setTitle(QString());
        label_19->setText(QCoreApplication::translate("AdminUserDetail3", "Manufacturer", nullptr));
        label_20->setText(QCoreApplication::translate("AdminUserDetail3", "Batch Number", nullptr));
        groupBox_11->setTitle(QString());
        labelIconVaccine2->setText(QCoreApplication::translate("AdminUserDetail3", "icon", nullptr));
        labelvaccine1Name->setText(QCoreApplication::translate("AdminUserDetail3", "Vaccine1 Name", nullptr));
        label_14->setText(QCoreApplication::translate("AdminUserDetail3", "Dose1", nullptr));
        groupBox_14->setTitle(QString());
        label_23->setText(QCoreApplication::translate("AdminUserDetail3", "Manufacturer", nullptr));
        label_24->setText(QCoreApplication::translate("AdminUserDetail3", "Batch Number", nullptr));
        pushButtonUpdate2->setText(QCoreApplication::translate("AdminUserDetail3", "Update", nullptr));
        label_8->setText(QCoreApplication::translate("AdminUserDetail3", "2. View Vaccination Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUserDetail3: public Ui_AdminUserDetail3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUSERDETAIL3_H
