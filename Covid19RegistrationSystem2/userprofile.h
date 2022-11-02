#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QDialog>

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


namespace Ui {
class UserProfile;
}

class UserProfile : public QDialog
{
    Q_OBJECT

public:
    explicit UserProfile(QWidget *parent = nullptr);
    ~UserProfile();

    QSqlDatabase db;

private:
    Ui::UserProfile *ui;
};

#endif // USERPROFILE_H
