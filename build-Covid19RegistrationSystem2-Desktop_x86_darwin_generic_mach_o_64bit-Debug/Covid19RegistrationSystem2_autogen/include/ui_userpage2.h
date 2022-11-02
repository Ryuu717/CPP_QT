/********************************************************************************
** Form generated from reading UI file 'userpage2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE2_H
#define UI_USERPAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_UserPage2
{
public:
    QLabel *label;

    void setupUi(QDialog *UserPage2)
    {
        if (UserPage2->objectName().isEmpty())
            UserPage2->setObjectName("UserPage2");
        UserPage2->resize(400, 300);
        label = new QLabel(UserPage2);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 90, 81, 16));

        retranslateUi(UserPage2);

        QMetaObject::connectSlotsByName(UserPage2);
    } // setupUi

    void retranslateUi(QDialog *UserPage2)
    {
        UserPage2->setWindowTitle(QCoreApplication::translate("UserPage2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserPage2", "UserPage2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPage2: public Ui_UserPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE2_H
