#include "widget.h"
#include "./ui_widget.h"
#include<QSql>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlError>
#include<QSqlDriver>

#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    const QString DRIVER("QSQLITE");

        if(QSqlDatabase::isDriverAvailable(DRIVER))
        {
             db = QSqlDatabase::addDatabase(DRIVER);

            //db.setDatabaseName(":memory:");
            db.setDatabaseName("/home/arun/testdb/database.db");


            if(!db.open())
                qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
        }
        else
            qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << " available";


auto query = QSqlQuery(db);

    //Create a table named accounts
    QString accountTable{"CREATE TABLE IF NOT EXISTS accounts"
                         "(username VARCHAR(20), name VARCHAR(20),"
                         "password VARCHAR(20))"};

    if(!query.exec(accountTable))
            QMessageBox::critical(this,"Info","Cannot create accounts");

    QString data1{" INSERT INTO [accounts] ([Username], [name], [password]) VALUES ('Arun_', 'Arun','kumar');"};
       QString data2{" INSERT INTO [accounts] ([Username], [name], [password]) VALUES ('Emma_', 'Password','kumar');"};
          QString data3{" INSERT INTO [accounts] ([Username], [name], [password]) VALUES ('shikha_', 'correct','kumar');"};
             QString data4{" INSERT INTO [accounts] ([Username], [name], [password]) VALUES ('Arun_', 'ArunP','kumar');"};

             if(!query.exec(data1))
                     QMessageBox::critical(this,"Info1","Cannot create accounts");

             if(!query.exec(data2))
                     QMessageBox::critical(this,"Info2","Cannot create accounts");

             if(!query.exec(data3))
                     QMessageBox::critical(this,"Info3","Cannot create accounts");

             if(!query.exec(data4))
                     QMessageBox::critical(this,"Info4","Cannot create accounts");

}



Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    auto query = QSqlQuery(db);
        QString select{"select * from [accounts];"};

        //execute the query
        if(!query.exec(select))
            qDebug() << "Cannot select from members";

        //define the model
        QSqlQueryModel * model = new QSqlQueryModel;
        model->setQuery(query);
        ui->tableView->setModel(model);

}

