#include "database.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>


Database::Database()
{
  database();
}



////////////////////////////////////////////////////////////////////////////////////////
//Connect Database
////////////////////////////////////////////////////////////////////////////////////////
void Database::database()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        db.setDatabaseName("/Users/Ryuuuu/QtProjects/Library/database.db");

        if(!db.open()){
            qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
        }else{
            qDebug() << "Database Open";
        }
    }
    else
        qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << "available";
}

