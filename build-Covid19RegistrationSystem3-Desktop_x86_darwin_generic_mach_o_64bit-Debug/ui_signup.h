/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConfirm;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_13;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditFirstName;
    QLineEdit *lineEditLastName;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditNHINumber;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditPasswordConfirm;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(726, 455);
        layoutWidget = new QWidget(Signup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 360, 291, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonBack = new QPushButton(layoutWidget);
        pushButtonBack->setObjectName("pushButtonBack");

        horizontalLayout_2->addWidget(pushButtonBack);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonConfirm = new QPushButton(layoutWidget);
        pushButtonConfirm->setObjectName("pushButtonConfirm");

        horizontalLayout_2->addWidget(pushButtonConfirm);

        label_6 = new QLabel(Signup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 40, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        label_7 = new QLabel(Signup);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(130, 90, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox = new QGroupBox(Signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 120, 401, 221));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 20, 331, 180));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName("label_13");

        verticalLayout->addWidget(label_13);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEditFirstName = new QLineEdit(layoutWidget_2);
        lineEditFirstName->setObjectName("lineEditFirstName");

        verticalLayout_2->addWidget(lineEditFirstName);

        lineEditLastName = new QLineEdit(layoutWidget_2);
        lineEditLastName->setObjectName("lineEditLastName");

        verticalLayout_2->addWidget(lineEditLastName);

        lineEditEmail = new QLineEdit(layoutWidget_2);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout_2->addWidget(lineEditEmail);

        lineEditNHINumber = new QLineEdit(layoutWidget_2);
        lineEditNHINumber->setObjectName("lineEditNHINumber");

        verticalLayout_2->addWidget(lineEditNHINumber);

        lineEditPassword = new QLineEdit(layoutWidget_2);
        lineEditPassword->setObjectName("lineEditPassword");

        verticalLayout_2->addWidget(lineEditPassword);

        lineEditPasswordConfirm = new QLineEdit(layoutWidget_2);
        lineEditPasswordConfirm->setObjectName("lineEditPasswordConfirm");

        verticalLayout_2->addWidget(lineEditPasswordConfirm);


        horizontalLayout->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(Signup);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(550, 120, 163, 161));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");

        verticalLayout_3->addWidget(label_12);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("Signup", "Back", nullptr));
        pushButtonConfirm->setText(QCoreApplication::translate("Signup", "Confirm", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "My health account ", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "Signup", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Signup", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        label_13->setText(QCoreApplication::translate("Signup", "NHI Number", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Password(Confirm)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Signup", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("Signup", "- At least 8 characters", nullptr));
        label_9->setText(QCoreApplication::translate("Signup", "- Uppercase (A-Z)", nullptr));
        label_10->setText(QCoreApplication::translate("Signup", "- Lowercase (a-z)", nullptr));
        label_11->setText(QCoreApplication::translate("Signup", "- Number (0-9)", nullptr));
        label_12->setText(QCoreApplication::translate("Signup", "- Symbols (@, !, ?, #)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
