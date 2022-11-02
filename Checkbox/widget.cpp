#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include "QButtonGroup"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    QButtonGroup * group = new QButtonGroup(this);
    group->addButton(ui->checkBoxApple);
    group->addButton(ui->checkBoxOrange);
    group->setExclusive(true);              //Only one of the options can be selected

    QButtonGroup * group2 = new QButtonGroup(this);
    group2->addButton(ui->checkBoxOption1);
    group2->addButton(ui->checkBoxOption2);
    group2->setExclusive(true);              //Only one of the options can be selected
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBoxApple_toggled(bool checked)
{
    if (checked){
        qDebug() << "Apple is checked";
    } else {
        qDebug() << "Apple is unchecked";
    }

}


void Widget::on_checkBoxOrange_toggled(bool checked)
{
    if (checked){
        qDebug() << "Orange is checked";
    } else {
        qDebug() << "Orange is unchecked";
    }

}


void Widget::on_checkBoxOption1_toggled(bool checked)
{
    if (checked){
        qDebug() << "Steve Jobs is checked";
    } else {
        qDebug() << "Steve Jobs is unchecked";
    }
}


void Widget::on_checkBoxOption2_toggled(bool checked)
{
    if (checked){
        qDebug() << "Bill Gates is checked";

    } else {
        qDebug() << "Bill Gates is unchecked";
    }
}


void Widget::on_pushButton_clicked()
{
}

