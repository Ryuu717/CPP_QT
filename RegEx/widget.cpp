#include "widget.h"
#include "./ui_widget.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Validator
    QRegularExpression rx("-?\\d{1,3}");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    ui->lineEdit->setValidator(validator);




}

Widget::~Widget()
{
    delete ui;
}

