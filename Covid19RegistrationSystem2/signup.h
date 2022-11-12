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


private slots:
    void on_pushButtonConfirm_clicked(QString firstName, QString lastName, QString email, QString password);

private:
    Ui::Signup *ui;

    QSqlDatabase db;

    QString firstName;
    QString lastName;
    QString email;
    QString NHINumber;
    QString password;


};
#endif // SIGNUP_H
