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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *textColorButton;
    QPushButton *backroundColorButton;
    QPushButton *fontButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(359, 96);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        textColorButton = new QPushButton(Widget);
        textColorButton->setObjectName("textColorButton");

        horizontalLayout->addWidget(textColorButton);

        backroundColorButton = new QPushButton(Widget);
        backroundColorButton->setObjectName("backroundColorButton");

        horizontalLayout->addWidget(backroundColorButton);

        fontButton = new QPushButton(Widget);
        fontButton->setObjectName("fontButton");

        horizontalLayout->addWidget(fontButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Some Text", nullptr));
        textColorButton->setText(QCoreApplication::translate("Widget", "Text Color", nullptr));
        backroundColorButton->setText(QCoreApplication::translate("Widget", "Background Color", nullptr));
        fontButton->setText(QCoreApplication::translate("Widget", "Font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
