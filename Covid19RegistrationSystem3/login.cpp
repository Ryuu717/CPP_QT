#include "landingpage.h"
#include "login.h"
#include "userpage.h"
#include "ui_login.h"
#include "adminmain.h"
#include "database.h"
#include "userpage.h"

#include <QDebug>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    //Get user input
    email = ui->lineEditEmail->text();
    password = ui->lineEditPassword->text();

    //hide password
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);

    //->LandingPage
    connect(ui->pushButtonBack,&QPushButton::clicked,[=](){
        LandingPage * landingPage = new LandingPage(this);
        this->hide();
        landingPage->show();
    });
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButtonConfirm_clicked()
{
    QSqlQuery query(db);
    int emailFlag=0, passwordFlag=0, adminFlag=0;

    //1. Blank Check
    if (isBlankExist() == true)
    {
        //2. Admin Check
        query.exec("SELECT count(*) FROM user WHERE email='"+email+"' and password='"+password+"' and UserStatus = 'Admin'");
        query.next();
        if(query.value(0).toInt()==1){
            emailFlag = 1;
            passwordFlag = 1;
            adminFlag = 1;
        }
        //3. User Check
        query.exec("SELECT count(*) FROM user WHERE email='"+email+"' and password ='"+password+"' and UserStatus = 'User'");
        query.next();
        if(query.value(0).toInt()==1){
            emailFlag = 1;
            passwordFlag = 1;
            adminFlag = 0;
        }
        //4. Existing Email Check
        query.exec("SELECT count(*) FROM user WHERE email='"+email+"' and password !='"+password+"'");
        query.next();
        if(query.value(0).toInt()==1){
            emailFlag = 1;
            passwordFlag = 0;
            adminFlag = 0;
        }

        //5. Judge
        if(emailFlag==1 && passwordFlag==1 && adminFlag==1){
            QMessageBox::information(this,"Login","Login successfully!");
            AdminMain * adminmain = new AdminMain(this);
            this->hide();
            adminmain->show();

        }else if (emailFlag==1 && passwordFlag==1 && adminFlag==0){
            QMessageBox::information(this,"Login","Login successfully!");

            //Page transition
            UserPage * userPage = new UserPage(this,email);     //Pass email to the User Page
            this->hide();
            userPage->show();

        }else if (emailFlag==1 && passwordFlag==0 && adminFlag==0){
            QMessageBox::information(this,"Login","Your password is wrong");
        }else{
            QMessageBox::information(this,"Login","You are not registered");
        }
    }
}


bool Login::isBlankExist()
{
    email = ui->lineEditEmail->text();
    password = ui->lineEditPassword->text();

    if(!email.isEmpty() && !password.isEmpty())
    {
        return true;
    }else{
        QMessageBox::information(this,"Signup","Please fill out all");
    }
}

//bool Login::recordLog()
//{
//    QSqlQuery query(db);
//    query.exec("INSERT INTO "
//                  "logs(FirstName, LastName, Email, NHINumber,Password,UserStatus) "
//                  "VALUES('"+firstName+"', '"+lastName+"', '"+email+"', '"+NHINumber+"', '"+password+"', 'User')");
//}


