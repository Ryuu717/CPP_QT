#include "widget.h"

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

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    Databaseconect();
//    DatabaseInit();
    DatabasePopulate();


    //First Name
    QLabel * labelFirstName = new QLabel("First name",this);
    labelFirstName->setMinimumSize(70,30);
    labelFirstName->move(10,10);

    QLineEdit * lineEditFirstName = new QLineEdit(this);
    lineEditFirstName->setMinimumSize(200,30);
    lineEditFirstName->move(100,10);

    //Last Name
    QLabel * labelLastName = new QLabel("Last name",this);
    labelLastName->setMinimumSize(70,30);
    labelLastName->move(10,70);

    QLineEdit * lineEditLastName = new QLineEdit(this);
    lineEditLastName->setMinimumSize(200,30);
    lineEditLastName->move(100,70);

    //Address(Update later)


    //Email
    QLabel * labelEmail = new QLabel("Email",this);
    labelEmail->setMinimumSize(70,110);
    labelEmail->move(10,70);

    QLineEdit * lineEditEmail = new QLineEdit(this);
    lineEditEmail->setMinimumSize(200,30);
    lineEditEmail->move(100,110);

    //Password
    QLabel * labelPassword = new QLabel("Password",this);
    labelPassword->setMinimumSize(70,190);
    labelPassword->move(10,70);

    QLineEdit * lineEditPassword = new QLineEdit(this);
    lineEditPassword->setMinimumSize(200,30);
    lineEditPassword->move(100,150);


    //Button
    QFont button_font("Times", 18, QFont::Bold);
    QPushButton * button = new QPushButton("Signup",this);
    button->setFont(button_font);
    button->move(100,300);



    //Connect
    connect(button,&QPushButton::clicked,[=](){
        QString firstName = lineEditFirstName->text();
        QString lastName = lineEditLastName->text();
        QString email = lineEditEmail->text();
        QString password = lineEditPassword->text();



        if( !firstName.isEmpty() && !lastName.isEmpty())
        {
            //Call function
            signupButton(firstName, lastName, email, password);

            //Reset
            lineEditFirstName->clear();
            lineEditLastName->clear();
            lineEditEmail->clear();
            lineEditPassword->clear();


            QMessageBox::information(this,"Login","Login successfully!");
            qDebug() << " First name is : " << firstName;
            qDebug() << " Last name is : " << lastName;
            qDebug() << " Email is : " << email;
            qDebug() << " Password is : " << password;
        }else
        {
            QMessageBox::information(this,"Login","Please fill out all");
            qDebug() << "One the fields is empty ";
        }
    });


    //Hint text
    lineEditFirstName->setPlaceholderText("First name");
    lineEditLastName->setPlaceholderText("Last name");
    lineEditEmail->setPlaceholderText("email@gmail.com");
    lineEditPassword->setPlaceholderText("aaAA11##");
}


//De-constructor
Widget::~Widget()
{
}


////////////////////////////////////////////////////////////////////////////////////////
//1. Connect database
////////////////////////////////////////////////////////////////////////////////////////
void Widget::Databaseconect()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        //db.setDatabaseName(":memory:");

        db.setDatabaseName("/Users/Ryuuuu/QtProjects/Signup/database.db");

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
//void Widget::DatabaseInit()
//{
//   QSqlQuery query("CREATE TABLE user (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT, email TEXT, password TEXT)");

//   if(!query.isActive())
//       qWarning() << "MainWindow::DatabaseInit - ERROR: " << query.lastError().text();
//   else
//       qDebug() << "Query Executed";
//}


////////////////////////////////////////////////////////////////////////////////////////
//3. Create table
////////////////////////////////////////////////////////////////////////////////////////
void Widget::DatabasePopulate()
{
    QSqlQuery query("CREATE TABLE user (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT, email TEXT, password TEXT)");

    if(!query.isActive()){
        qWarning() << "ERROR: " << query.lastError().text();
    }else{
        qDebug() << "Query Executed";
    }
}


////////////////////////////////////////////////////////////////////////////////////////
//4. Insert data
////////////////////////////////////////////////////////////////////////////////////////
void Widget::signupButton(QString firstName, QString lastName, QString email, QString password)
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


