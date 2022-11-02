/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QLabel *label_6;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConfirm;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPassword;
    QLabel *label_7;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(634, 447);
        label_6 = new QLabel(Login);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 30, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        layoutWidget_2 = new QWidget(Login);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(160, 330, 291, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonBack = new QPushButton(layoutWidget_2);
        pushButtonBack->setObjectName("pushButtonBack");

        horizontalLayout_2->addWidget(pushButtonBack);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonConfirm = new QPushButton(layoutWidget_2);
        pushButtonConfirm->setObjectName("pushButtonConfirm");

        horizontalLayout_2->addWidget(pushButtonConfirm);

        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 110, 461, 181));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 30, 301, 108));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout_2->addWidget(lineEditEmail);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");

        verticalLayout_2->addWidget(lineEditPassword);


        horizontalLayout->addLayout(verticalLayout_2);

        label_7 = new QLabel(Login);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 80, 201, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "My health account ", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("Login", "Back", nullptr));
        pushButtonConfirm->setText(QCoreApplication::translate("Login", "Confirm", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("Login", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
