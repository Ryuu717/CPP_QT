/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *appleRadioButton;
    QRadioButton *orangeRadioButton;
    QRadioButton *bananaRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName("InfoDialog");
        InfoDialog->resize(224, 225);
        verticalLayout_2 = new QVBoxLayout(InfoDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(InfoDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nameLineEdit = new QLineEdit(InfoDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        appleRadioButton = new QRadioButton(groupBox);
        appleRadioButton->setObjectName("appleRadioButton");

        verticalLayout->addWidget(appleRadioButton);

        orangeRadioButton = new QRadioButton(groupBox);
        orangeRadioButton->setObjectName("orangeRadioButton");

        verticalLayout->addWidget(orangeRadioButton);

        bananaRadioButton = new QRadioButton(groupBox);
        bananaRadioButton->setObjectName("bananaRadioButton");

        verticalLayout->addWidget(bananaRadioButton);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(InfoDialog);
        okButton->setObjectName("okButton");

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(InfoDialog);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Name : ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Favorite fruits", nullptr));
        appleRadioButton->setText(QCoreApplication::translate("InfoDialog", "Apple", nullptr));
        orangeRadioButton->setText(QCoreApplication::translate("InfoDialog", "Orang", nullptr));
        bananaRadioButton->setText(QCoreApplication::translate("InfoDialog", "Banana", nullptr));
        okButton->setText(QCoreApplication::translate("InfoDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
