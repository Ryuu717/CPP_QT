#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QString>
#include <QSqlDatabase>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QSqlDatabase db;


private:
    void Databaseconect();
    void DatabaseInit();
    void DatabasePopulate();

    void signupButton(QString firstName, QString lastName, QString email, QString password);


//    QString lineEditFirstName, lineEditlasstName, lineEditEmail, lineEditPassword;
};
#endif // WIDGET_H
