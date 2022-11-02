#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

#include <QString>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class Signup; }
QT_END_NAMESPACE

class Signup : public QDialog
{
    Q_OBJECT

public:
    Signup(QWidget *parent = nullptr);
    ~Signup();

    QSqlDatabase db;

private slots:
    void on_pushButtonConfirm_clicked(QString firstName, QString lastName, QString email, QString password);

private:
    Ui::Signup *ui;

public:
    void Databaseconect();
    void DatabaseInit();
    void DatabasePopulate();


};
#endif // SIGNUP_H
