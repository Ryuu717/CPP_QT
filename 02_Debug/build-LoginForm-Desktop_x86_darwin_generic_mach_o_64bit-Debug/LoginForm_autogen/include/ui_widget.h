/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *LineFirstName;
    QPushButton *ButtonResister;
    QLabel *LabelNum1;
    QLabel *LabelNum1_3;
    QLineEdit *LinePasswordConfirm;
    QLabel *LabelNum1_2;
    QLabel *LabelNum2;
    QLineEdit *LinePassword;
    QLineEdit *LineLastName;
    QPushButton *ButtonCancel;
    QLabel *LabelNum2_2;
    QLineEdit *LineEmail;
    QLabel *LabelNum2_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(330, 235);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        LineFirstName = new QLineEdit(Widget);
        LineFirstName->setObjectName("LineFirstName");

        gridLayout->addWidget(LineFirstName, 1, 2, 1, 1);

        ButtonResister = new QPushButton(Widget);
        ButtonResister->setObjectName("ButtonResister");

        gridLayout->addWidget(ButtonResister, 6, 0, 1, 1);

        LabelNum1 = new QLabel(Widget);
        LabelNum1->setObjectName("LabelNum1");

        gridLayout->addWidget(LabelNum1, 1, 0, 1, 1);

        LabelNum1_3 = new QLabel(Widget);
        LabelNum1_3->setObjectName("LabelNum1_3");

        gridLayout->addWidget(LabelNum1_3, 0, 0, 1, 2);

        LinePasswordConfirm = new QLineEdit(Widget);
        LinePasswordConfirm->setObjectName("LinePasswordConfirm");

        gridLayout->addWidget(LinePasswordConfirm, 5, 2, 1, 1);

        LabelNum1_2 = new QLabel(Widget);
        LabelNum1_2->setObjectName("LabelNum1_2");

        gridLayout->addWidget(LabelNum1_2, 2, 0, 1, 1);

        LabelNum2 = new QLabel(Widget);
        LabelNum2->setObjectName("LabelNum2");

        gridLayout->addWidget(LabelNum2, 3, 0, 1, 1);

        LinePassword = new QLineEdit(Widget);
        LinePassword->setObjectName("LinePassword");

        gridLayout->addWidget(LinePassword, 4, 2, 1, 1);

        LineLastName = new QLineEdit(Widget);
        LineLastName->setObjectName("LineLastName");

        gridLayout->addWidget(LineLastName, 2, 2, 1, 1);

        ButtonCancel = new QPushButton(Widget);
        ButtonCancel->setObjectName("ButtonCancel");

        gridLayout->addWidget(ButtonCancel, 6, 2, 1, 1);

        LabelNum2_2 = new QLabel(Widget);
        LabelNum2_2->setObjectName("LabelNum2_2");

        gridLayout->addWidget(LabelNum2_2, 4, 0, 1, 1);

        LineEmail = new QLineEdit(Widget);
        LineEmail->setObjectName("LineEmail");

        gridLayout->addWidget(LineEmail, 3, 2, 1, 1);

        LabelNum2_3 = new QLabel(Widget);
        LabelNum2_3->setObjectName("LabelNum2_3");

        gridLayout->addWidget(LabelNum2_3, 5, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Login Form", nullptr));
        ButtonResister->setText(QCoreApplication::translate("Widget", "Resister", nullptr));
        LabelNum1->setText(QCoreApplication::translate("Widget", "First Name", nullptr));
        LabelNum1_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">Login</span></p></body></html>", nullptr));
        LinePasswordConfirm->setText(QString());
        LabelNum1_2->setText(QCoreApplication::translate("Widget", "Last Name", nullptr));
        LabelNum2->setText(QCoreApplication::translate("Widget", "E-mail", nullptr));
        ButtonCancel->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        LabelNum2_2->setText(QCoreApplication::translate("Widget", "Password", nullptr));
        LabelNum2_3->setText(QCoreApplication::translate("Widget", "Password(confirm)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
