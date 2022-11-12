#include "landingpage.h"
#include "signup.h"
#include "userpage.h"

#include "./ui_signup.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>

Signup::Signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);


    //Hide password
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    ui->lineEditPasswordConfirm->setEchoMode(QLineEdit::Password);


    //Signup
    connect(ui->pushButtonConfirm,&QPushButton::clicked,[=](){
        firstName = ui->lineEditFirstName->text();
        lastName = ui->lineEditLastName->text();
        email = ui->lineEditEmail->text();
        NHINumber = ui->lineEditNHINumber->text();
        password = ui->lineEditPassword->text();

        if( !firstName.isEmpty() && !lastName.isEmpty())
        {
            //Call function
            on_pushButtonConfirm_clicked(firstName, lastName, email, password);

            //Reset
            ui->lineEditFirstName->clear();
            ui->lineEditLastName->clear();
            ui->lineEditEmail->clear();
            ui->lineEditNHINumber->clear();
            ui->lineEditPassword->clear();
            ui->lineEditPasswordConfirm->clear();

            QMessageBox::information(this,"Signup","Signup successfully!");

            //Signup->UserPage (Need validation)
            UserPage * userPage = new UserPage(this, email);
            this->hide();
            userPage->show();


        }else
        {
            QMessageBox::information(this,"Signup","Please fill out all");
        }
    });

    //Hint text
    ui->lineEditFirstName->setPlaceholderText("First name");
    ui->lineEditLastName->setPlaceholderText("Last name");
    ui->lineEditEmail->setPlaceholderText("email@gmail.com");
    ui->lineEditNHINumber->setPlaceholderText("AA0001");
    ui->lineEditPassword->setPlaceholderText("aaAA11##");
    ui->lineEditPasswordConfirm->setPlaceholderText("aaAA11##");




    //Signup->LandingPage
    connect(ui->pushButtonBack,&QPushButton::clicked,[=](){
        LandingPage * landingPage = new LandingPage(this);
        this->hide();
        landingPage->show();
    });

}

Signup::~Signup()
{
    delete ui;
}


////////////////////////////////////////////////////////////////////////////////////////
//4. Signup
////////////////////////////////////////////////////////////////////////////////////////
void Signup::on_pushButtonConfirm_clicked(QString firstName, QString lastName, QString email, QString password)
{
    QSqlQuery query(db);

    query.prepare("INSERT INTO "
                  "user(FirstName, LastName, Email, NHINumber,Password) "
                  "VALUES('"+firstName+"', '"+lastName+"', '"+email+"', '"+NHINumber+"', '"+password+"')");

    if(!query.exec())
        qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
}

