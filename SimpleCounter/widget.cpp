#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->doubleSpinBox_1,&QDoubleSpinBox::valueChanged,this,&Widget::value1_changed);
    connect(ui->doubleSpinBox_2,&QDoubleSpinBox::valueChanged,this,&Widget::value2_changed);
    connect(ui->doubleSpinBox_3,&QDoubleSpinBox::valueChanged,this,&Widget::value3_changed);
    connect(ui->doubleSpinBox_4,&QDoubleSpinBox::valueChanged,this,&Widget::value4_changed);

    connect(this,&Widget::total_changed,[=](){
            ui->result->setText(QString::number(total));
        });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::add()
{
    total = v1 + v2 + v3 + v4;
//    emit total_changed();
    total_changed();
}

void Widget::value1_changed(double value1)
{
    v1 = value1;
    add();
}

void Widget::value2_changed(double value2)
{
    v2 = value2;
    add();
}

void Widget::value3_changed(double value3)
{
    v3 = value3;
    add();
}

void Widget::value4_changed(double value4)
{
    v4 = value4;
    add();
}


