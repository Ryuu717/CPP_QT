#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    connect(ui->horizontalSlider,&QSlider::valueChanged,
//            ui->progressBar,&QProgressBar::setValue,
//            ui->label->setText("Status"+QString::number(ui->horizontalSlider->value())));

    //Functor Notation : Lambas
    connect(ui->horizontalSlider,&QSlider::valueChanged,[=] (){
        ui->progressBar->setValue(ui->horizontalSlider->value());
        ui->label->setText("Status: "+QString::number(ui->horizontalSlider->value()));
    });

}

Widget::~Widget()
{
    delete ui;
}

