#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QApplication>>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->LabelOutput->setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_ButtonAdd_clicked()
{
    double num1 = ui->LineNum1->text().toDouble();
    double num2 = ui->LineNum2->text().toDouble();
    double result = num1 + num2;
//    ui->LabelResult->setText(QString::number(result));
    ui->LabelOutput->setText(QString::number(result));

}

void Widget::on_ButtonReset_clicked()
{
    ui->LineNum1->setText("");
    ui->LineNum2->setText("");
//    ui->LabelResult->setText("");
    ui->LabelOutput->setText("");
}


void Widget::on_ButtonQuit_clicked()
{
    QApplication::quit();
}




