#include "landingpage.h"
#include "signup.h"
#include "login.h"
#include "userpage.h"
#include "ui_login.h"
#include <QDebug>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


    //call database(Need to improve)
    Signup * signup = new Signup(this);

    if(!db.open()){
        qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
    }



    //Login->UserPage (Need validation)
    connect(ui->pushButtonConfirm,&QPushButton::clicked,[=](){

        //Get user input
        email = ui->lineEditEmail->text();
        password = ui->lineEditPassword->text();

        QSqlQuery query(db);


        if(query.exec("SELECT * FROM user WHERE email='"+email+"' and password='"+password+"'")){

            int count = 0;

            while (query.next()) {
                count++;
                qDebug() << count;
            }

            if(count==1){
                QMessageBox::information(this,"Login","Login successfully!");

                UserPage * userPage = new UserPage(this);
                this->hide();
                userPage->show();
            }else{
                QMessageBox::information(this,"Login","You entered wrong information");
            }
        };

//        UserPage * userPage = new UserPage(this);
//        this->hide();
//        userPage->show();

    });

    //Login->LandingPage
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
