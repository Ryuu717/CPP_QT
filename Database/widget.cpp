#include "widget.h"
#include "./ui_widget.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Databaseconect();
    //DatabaseInit();
    DatabasePopulate();
}

Widget::~Widget()
{
    delete ui;
}

//Reference
//http://blog.davidecoppola.com/2016/11/howto-embed-database-in-application-with-sqlite-and-qt/


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

        db.setDatabaseName("/Users/Ryuuuu/QtProjects/Database/database.db");

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
//   QSqlQuery query("CREATE TABLE people (id INTEGER PRIMARY KEY, name TEXT, city TEXT)");

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
    QSqlQuery query("CREATE TABLE people (id INTEGER PRIMARY KEY, name TEXT, city TEXT)");

    if(!query.isActive()){
        qWarning() << "ERROR: " << query.lastError().text();
    }else{
        qDebug() << "Query Executed";
    }
}


////////////////////////////////////////////////////////////////////////////////////////
//4. Insert data
////////////////////////////////////////////////////////////////////////////////////////
void Widget::on_pushButton_clicked()
{
    QSqlQuery query;
    query.prepare("INSERT INTO people(id, name, city) VALUES(:id, :name, :city)");
    query.bindValue(":id",ui->lineEdit->text().toInt());
    query.bindValue(":name",ui->lineEdit_2->text());
    query.bindValue(":city",ui->lineEdit_3->text());

    if(!query.exec())
        qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();

//    query.exec();
}

