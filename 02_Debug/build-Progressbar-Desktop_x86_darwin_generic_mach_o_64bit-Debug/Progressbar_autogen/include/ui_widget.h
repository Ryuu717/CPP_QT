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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(467, 161);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(380, 80, 64, 23));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(377, 120, 61, 20));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 11, 431, 55));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setEnabled(true);
        horizontalSlider->setAcceptDrops(false);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
