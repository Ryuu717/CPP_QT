/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QGroupBox *groupBox_6;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label;
    QPushButton *pushButtonLogout;
    QGroupBox *groupBox_2;
    QLabel *labelHome;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_7;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelFirstName;
    QLabel *labelLastName;
    QLabel *labelEmail;
    QPushButton *pushButtonHome;

    void setupUi(QDialog *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName("UserProfile");
        UserProfile->resize(837, 514);
        groupBox_6 = new QGroupBox(UserProfile);
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
        label = new QLabel(UserProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        pushButtonLogout = new QPushButton(UserProfile);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(730, 10, 100, 32));
        groupBox_2 = new QGroupBox(UserProfile);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 80, 481, 41));
        labelHome = new QLabel(groupBox_2);
        labelHome->setObjectName("labelHome");
        labelHome->setGeometry(QRect(10, 10, 36, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(53, 10, 16, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(64, 10, 241, 16));
        label_7 = new QLabel(UserProfile);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 140, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox = new QGroupBox(UserProfile);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 190, 581, 251));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 50, 281, 68));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelFirstName = new QLabel(layoutWidget);
        labelFirstName->setObjectName("labelFirstName");

        verticalLayout_2->addWidget(labelFirstName);

        labelLastName = new QLabel(layoutWidget);
        labelLastName->setObjectName("labelLastName");

        verticalLayout_2->addWidget(labelLastName);

        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName("labelEmail");

        verticalLayout_2->addWidget(labelEmail);


        horizontalLayout->addLayout(verticalLayout_2);

        pushButtonHome = new QPushButton(UserProfile);
        pushButtonHome->setObjectName("pushButtonHome");
        pushButtonHome->setGeometry(QRect(210, 10, 61, 32));

        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QDialog *UserProfile)
    {
        UserProfile->setWindowTitle(QCoreApplication::translate("UserProfile", "Dialog", nullptr));
        groupBox_6->setTitle(QString());
        label_17->setText(QCoreApplication::translate("UserProfile", "User Name", nullptr));
        label_18->setText(QCoreApplication::translate("UserProfile", "View Profile", nullptr));
        label_19->setText(QCoreApplication::translate("UserProfile", "Icon", nullptr));
        label->setText(QCoreApplication::translate("UserProfile", "My health account ", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("UserProfile", "Log out", nullptr));
        groupBox_2->setTitle(QString());
        labelHome->setText(QCoreApplication::translate("UserProfile", "Home", nullptr));
        label_9->setText(QCoreApplication::translate("UserProfile", "/", nullptr));
        label_10->setText(QCoreApplication::translate("UserProfile", " View Covid-19 Test Result", nullptr));
        label_7->setText(QCoreApplication::translate("UserProfile", "Profile", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("UserProfile", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("UserProfile", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("UserProfile", "Email", nullptr));
        labelFirstName->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        labelLastName->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        labelEmail->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        pushButtonHome->setText(QCoreApplication::translate("UserProfile", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
