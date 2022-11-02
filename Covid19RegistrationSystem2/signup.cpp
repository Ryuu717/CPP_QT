#include "landingpage.h"
#include "signup.h"
#include "userpage.h"

#include "./ui_signup.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>

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

    //Database
    Databaseconect();
    DatabaseInit();
    DatabasePopulate();




    //Signup
    connect(ui->pushButtonConfirm,&QPushButton::clicked,[=](){
        QString firstName = ui->lineEditFirstName->text();
        QString lastName = ui->lineEditLastName->text();
        QString email = ui->lineEditEmail->text();
        QString password = ui->lineEditPassword->text();



        if( !firstName.isEmpty() && !lastName.isEmpty())
        {
            //Call function
            on_pushButtonConfirm_clicked(firstName, lastName, email, password);

            //Reset
            ui->lineEditFirstName->clear();
            ui->lineEditLastName->clear();
            ui->lineEditEmail->clear();
            ui->lineEditPassword->clear();


            QMessageBox::information(this,"Signup","Signup successfully!");
            qDebug() << " First name is : " << firstName;
            qDebug() << " Last name is : " << lastName;
            qDebug() << " Email is : " << email;
            qDebug() << " Password is : " << password;



            //Signup->UserPage (Need validation)
            UserPage * userPage = new UserPage(this);
            this->hide();
            userPage->show();


        }else
        {
            QMessageBox::information(this,"Signup","Please fill out all");
            qDebug() << "One the fields is empty ";
        }
    });

    //Hint text
    ui->lineEditFirstName->setPlaceholderText("First name");
    ui->lineEditLastName->setPlaceholderText("Last name");
    ui->lineEditEmail->setPlaceholderText("email@gmail.com");
    ui->lineEditPassword->setPlaceholderText("aaAA11##");
    ui->lineEditPasswordConfirm->setPlaceholderText("aaAA11##");



    //Signup->UserPage (Need validation)
//    connect(ui->pushButtonConfirm,&QPushButton::clicked,[=](){
//        UserPage * userPage = new UserPage(this);
//        this->hide();
//        userPage->show();
//    });

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
//1. Connect database
////////////////////////////////////////////////////////////////////////////////////////
void Signup::Databaseconect()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        //db.setDatabaseName(":memory:");

        db.setDatabaseName("/Users/Ryuuuu/QtProjects/Covid19RegistrationSystem2/database.db");

        if(!db.open()){
            qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
        }else{
            qDebug() << "Database Open";
        }
    }
    else
        qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << "available";
}

////////////////////////////////////////////////////////////////////////////////////////
//2. Initialize(Create table)
////////////////////////////////////////////////////////////////////////////////////////
void Signup::DatabaseInit()
{
   QSqlQuery query("CREATE TABLE user (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT, email TEXT, password TEXT)");

   if(!query.isActive())
       qWarning() << "MainWindow::DatabaseInit - ERROR: " << query.lastError().text();
   else
       qDebug() << "Query Executed";
}


////////////////////////////////////////////////////////////////////////////////////////
//3. Create table
////////////////////////////////////////////////////////////////////////////////////////
void Signup::DatabasePopulate()
{
    QSqlQuery query("CREATE TABLE user (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT, email TEXT, password TEXT)");

    if(!query.isActive()){
        qWarning() << "ERROR: " << query.lastError().text();
    }else{
        qDebug() << "Query Executed";
    }
}


////////////////////////////////////////////////////////////////////////////////////////
//4. Signup
////////////////////////////////////////////////////////////////////////////////////////
void Signup::on_pushButtonConfirm_clicked(QString firstName, QString lastName, QString email, QString password)
{
    QSqlQuery query(db);

    int dbSize=0;

    if (query.prepare("SELECT * FROM user")) {
        if (query.exec()) {
            while (query.next()) {
                QString value1 = query.value(0).toString();
                QString value2 = query.value(1).toString();
                QString value3 = query.value(2).toString();
                QString value4 = query.value(3).toString();
                qDebug() << value1 << "/" << value2 << "/" << value3 << "/" << value4 ;

                dbSize++;
            }
        } else {
            qWarning() << query.lastError();
            qInfo() << query.lastQuery() << query.boundValues();
        }
    } else {
        qWarning() << query.lastError();
    }


    query.prepare("INSERT INTO user(id, firstName, lastName, email, password) VALUES(:id, :firstName, :lastName, :email, :password)");
    query.bindValue(":id", dbSize + 1);
    query.bindValue(":firstName",firstName);
    query.bindValue(":lastName",lastName);
    query.bindValue(":email",email);
    query.bindValue(":password",password);


    if(!query.exec())
        qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();




    query.exec();
}

