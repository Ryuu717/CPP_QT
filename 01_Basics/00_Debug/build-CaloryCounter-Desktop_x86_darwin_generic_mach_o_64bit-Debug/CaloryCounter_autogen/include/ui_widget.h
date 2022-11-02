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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *caloryCountLabel;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *timeSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *slopeComboBox;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *weightSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *speedSpinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(769, 185);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_7->addWidget(label);

        caloryCountLabel = new QLabel(Widget);
        caloryCountLabel->setObjectName("caloryCountLabel");
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        caloryCountLabel->setFont(font1);
        caloryCountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(caloryCountLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        timeSpinBox = new QDoubleSpinBox(Widget);
        timeSpinBox->setObjectName("timeSpinBox");
        timeSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(timeSpinBox);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        slopeComboBox = new QLabel(Widget);
        slopeComboBox->setObjectName("slopeComboBox");

        horizontalLayout_3->addWidget(slopeComboBox);

        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        weightSpinBox = new QDoubleSpinBox(Widget);
        weightSpinBox->setObjectName("weightSpinBox");
        weightSpinBox->setValue(70.000000000000000);

        horizontalLayout_2->addWidget(weightSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        speedSpinBox = new QDoubleSpinBox(Widget);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setValue(6.000000000000000);

        horizontalLayout_4->addWidget(speedSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Colory Counter", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Calory Count : ", nullptr));
        caloryCountLabel->setText(QCoreApplication::translate("Widget", "100", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Time (h): ", nullptr));
        slopeComboBox->setText(QCoreApplication::translate("Widget", "Slope : ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "Weight(Kg) : ", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Speed (Km/h)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
