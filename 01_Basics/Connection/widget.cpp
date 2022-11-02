#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //1. String notation
//    connect(ui->myButton,SIGNAL(clicked()),this,SLOT(change_text()));


    //2. Functor Notation : Regular Slots
//    connect(ui->myButton,&QPushButton::clicked,this,&Widget::change_text);


    //3. Functor Notation : Lambdas
    connect(ui->myButton,&QPushButton::clicked,[=](){
        ui->label->setText("Text from lambda");
    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::change_text()
{
    ui->label->setText("Some other text");
}




