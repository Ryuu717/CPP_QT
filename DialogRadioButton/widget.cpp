#include "widget.h"
#include "./ui_widget.h"
#include "infodialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_provideInfoButton_clicked()
{
    InfoDialog * dialog = new InfoDialog(this);


    //1. Show the dialog modal
    auto ret = dialog->exec();

    if(ret == QDialog::Accepted){

        QString name = dialog->name();
        QString fruit = dialog->favorite_fruit();

        qDebug() << "Dialog accepted ,name is : " << name
                        << " and favorite fruit is : " << fruit;
        ui->infoLabel->setText(name + "'s favorite fruits is " + fruit);
    }else{
        ui->infoLabel->setText("Dialog rejected");
    }





    //2. Non modal
//    connect(dialog,&InfoDialog::accepted,[=](){
//        QString name = dialog->name();
//        QString fruit = dialog->favorite_fruit();

//        qDebug() << "Dialog accepted ,name is : " << name << " and favorite fruit is : " << fruit;
//        ui->infoLabel->setText(name + "'s favorite fruits is " + fruit);
//    });

//    connect(dialog,&InfoDialog::rejected,[=](){
//       ui->infoLabel->setText("Dialog rejected");
//    });

//    dialog->show();
//    dialog->raise();//Put it to the top
//    dialog->activateWindow();// Give the dialog focus
}

