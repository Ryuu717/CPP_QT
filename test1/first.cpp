#include "first.h"
#include "ui_first.h"

first::first(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);

    second = new Second();
    timer = new QTimer();
    connect(timer,&QTimer::timeout,this,&First::changeWindow);
    timer->start(1000); // 1000 ms
}

first::~first()
{
    delete ui;
}

void First::changeWindow()
{
    if(second->isVisible())
    {
        second->hide();
        this->show();
    }
    else
    {
        this->hide();
        second->show();
    }
}

void First::on_pushButton_clicked()
{
    second->show();
}
