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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QCheckBox *checkBoxApple;
    QCheckBox *checkBoxOrange;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEditQuestion1;
    QCheckBox *checkBoxOption1;
    QCheckBox *checkBoxOption2;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(472, 428);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 20, 221, 121));
        checkBoxApple = new QCheckBox(groupBox);
        checkBoxApple->setObjectName("checkBoxApple");
        checkBoxApple->setGeometry(QRect(30, 40, 85, 20));
        checkBoxOrange = new QCheckBox(groupBox);
        checkBoxOrange->setObjectName("checkBoxOrange");
        checkBoxOrange->setGeometry(QRect(30, 70, 85, 20));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 160, 261, 181));
        tab = new QWidget();
        tab->setObjectName("tab");
        lineEditQuestion1 = new QLineEdit(tab);
        lineEditQuestion1->setObjectName("lineEditQuestion1");
        lineEditQuestion1->setGeometry(QRect(210, 100, 41, 20));
        checkBoxOption1 = new QCheckBox(tab);
        checkBoxOption1->setObjectName("checkBoxOption1");
        checkBoxOption1->setGeometry(QRect(50, 50, 121, 20));
        checkBoxOption2 = new QCheckBox(tab);
        checkBoxOption2->setObjectName("checkBoxOption2");
        checkBoxOption2->setGeometry(QRect(50, 80, 85, 20));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 221, 20));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(169, 120, 81, 32));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        checkBoxApple->setText(QCoreApplication::translate("Widget", "Apple", nullptr));
        checkBoxOrange->setText(QCoreApplication::translate("Widget", "Orange", nullptr));
        lineEditQuestion1->setPlaceholderText(QString());
        checkBoxOption1->setText(QCoreApplication::translate("Widget", "Steve Jobs", nullptr));
        checkBoxOption2->setText(QCoreApplication::translate("Widget", "Bill Gates", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Q1. who is the founder of apple\357\274\237", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "Q1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "Q2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "Q3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
