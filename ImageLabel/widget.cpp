#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap myImage(":/skytower.jpg");
    ui->imageLabel->setPixmap(myImage.scaled(200,200));
}

Widget::~Widget()
{
    delete ui;
}

