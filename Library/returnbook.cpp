#include "returnbook.h"
#include "ui_returnbook.h"

#include <QSqlQuery>
#include<QSqlQueryModel>

#include "database.h"

ReturnBook::ReturnBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnBook)
{
    ui->setupUi(this);

    //Call/Open Database
    Database * database = new Database();

    //Show database
    returnbook();

}

ReturnBook::~ReturnBook()
{
    delete ui;
}





void ReturnBook::returnbook()
{
    auto query = QSqlQuery(db);
        QString select{"select * from [books];"};

        //execute the query
        if(!query.exec(select))
            qDebug() << "Cannot select from members";

        //define the model
        QSqlQueryModel * model = new QSqlQueryModel;
        model->setQuery(query);
        ui->tableView->setModel(model);
}
