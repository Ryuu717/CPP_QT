#include "widget.h"
#include "./ui_widget.h"
#include <QtDebug>

#include <cstdlib>  //for srand, rand
#include <ctime>

////////////////////////////////////////////////////////////////////////////////////////
//Widget(call first )
////////////////////////////////////////////////////////////////////////////////////////
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Set up the seed
     std::srand(std::time(nullptr));
     secret_number = std::rand() % 10 + 1;      //Generate (1-10)
     qDebug() << "Secret Number generated : " << QString::number(secret_number);


     //Disable the start over button
     ui->startOverButton->setDisabled(true);

     //Clear the message label
     ui->messageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}



////////////////////////////////////////////////////////////////////////////////////////
//Guess button
////////////////////////////////////////////////////////////////////////////////////////
void Widget::on_guessButton_clicked()
{
   guess_number = ui->numberSpinbox->value();
   qDebug() <<"User guessed : " << QString::number(guess_number);

   if(guess_number == secret_number){
       ui->messageLabel->setText(
                   "Congratulations, the number is " + QString::number(guess_number));

       //Reset buttons
       ui->guessButton->setDisabled(true);
       ui->startOverButton->setDisabled(false);

   }else{
       if(secret_number < guess_number){
           ui->messageLabel->setText("Number is lower than that");
       }
       if ( secret_number > guess_number){
          ui->messageLabel->setText("Number is higher than that");
       }

   }
}


////////////////////////////////////////////////////////////////////////////////////////
//Restart button
////////////////////////////////////////////////////////////////////////////////////////
void Widget::on_startOverButton_clicked()
{
    //Reset buttons, spinbox, secret number, message label
    ui->guessButton->setDisabled(false);
    ui->startOverButton->setDisabled(true);
    ui->numberSpinbox->setValue(1);
    secret_number = std::rand() % 10 + 1;
    ui->messageLabel->setText("");
}

