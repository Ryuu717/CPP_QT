#ifndef COMMON_H
#define COMMON_H

#include <QString>
#include <QSqlDatabase>



#include <regex>

class Common
{
public:
    Common();

    bool isBlankExist();
    bool isPasswordMatch();
    bool isEmailValid(QString email);
    bool isEmailExist(QString email);
    bool isPasswordValid(QString password);

private:
    QSqlDatabase db;

    QString firstName;
    QString lastName;
    QString email;
    QString NHINumber;
    QString password;
    QString passwordConfirm;
};

#endif // COMMON_H
