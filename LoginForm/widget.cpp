#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QApplication>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //hide password
    ui->LinePassword->setEchoMode(QLineEdit::Password);
    ui->LinePasswordConfirm->setEchoMode(QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}




////////////////////////////////////////////////////////////////////////////////////////
//Resister
////////////////////////////////////////////////////////////////////////////////////////
void Widget::on_ButtonResister_clicked()
{
    QString FirstName = ui->LineFirstName->text().toLower();
    QString LastName = ui->LineLastName->text().toLower();
    QString Email = ui->LineEmail->text().toLower();
    QString Password = ui->LinePassword->text().toLower();
    QString PasswordConfirm = ui->LinePasswordConfirm->text().toLower();


    if (FirstName != "" & LastName != "" & Email != "" & Password != "" & PasswordConfirm != ""){
        if(Password == PasswordConfirm){
            QMessageBox::information(this,"Message", "Your information was registered", QMessageBox::Ok);
            ui->LineFirstName->setText("");
            ui->LineLastName->setText("");
            ui->LineEmail->setText("");
            ui->LinePassword->setText("");
            ui->LinePasswordConfirm->setText("");
        }else{
            QMessageBox::information(this,"Message", "Your password doesn't match", QMessageBox::Ok);
        }
    }else{
        QMessageBox::information(this,"Message", "Please fill out all forms", QMessageBox::Ok);
    }

}



////////////////////////////////////////////////////////////////////////////////////////
//Resister
////////////////////////////////////////////////////////////////////////////////////////
void Widget::on_ButtonCancel_clicked()
{
    ui->LineFirstName->setText("");
    ui->LineLastName->setText("");
    ui->LineEmail->setText("");
    ui->LinePassword->setText("");
    ui->LinePasswordConfirm->setText("");
}

