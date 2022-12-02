#include "common.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

Common::Common()
{

}


bool Common::isBlankExist()
{
    firstName = ui->lineEditFirstName->text();
    lastName = ui->lineEditLastName->text();
    email = ui->lineEditEmail->text();
    NHINumber = ui->lineEditNHINumber->text();
    password = ui->lineEditPassword->text();
    passwordConfirm = ui->lineEditPasswordConfirm->text();

    if(!firstName.isEmpty() && !lastName.isEmpty() && !email.isEmpty() && !NHINumber.isEmpty() && !password.isEmpty()  && !passwordConfirm.isEmpty())
    {
        return true;
    }else{
        QMessageBox::information(this,"Common","Please fill out all");
    }
}


bool Common::isPasswordValid(QString password)
{
    bool result;
    int digitFlag = 0, upperFlag = 0, lowerFlag = 0, specialCharacterFlag = 0, numberFlag = 0;

    //check 5 requirements separetely
    QRegularExpression digitPattern(".{8,}");
    QRegularExpression upperCasePattern("[A-Z]+");
    QRegularExpression lowerCasePattern("[a-z]+");
    QRegularExpression specialCharacterPattern("[@!?#]+");
    QRegularExpression numberPattern("[0-9]+");

    QRegularExpressionMatch digitMatch = digitPattern.match(password);
    QRegularExpressionMatch upperCaseMatch = upperCasePattern.match(password);
    QRegularExpressionMatch lowerCaseMatch = lowerCasePattern.match(password);
    QRegularExpressionMatch specialCharacterMatch = specialCharacterPattern.match(password);
    QRegularExpressionMatch numberMatch = numberPattern.match(password);

    bool digitHasMatch = digitMatch.hasMatch();
    bool upperCaseHasMatch = upperCaseMatch.hasMatch();
    bool lowerCaseHasMatch = lowerCaseMatch.hasMatch();
    bool specialCharacterCaseHasMatch = specialCharacterMatch.hasMatch();
    bool numberHasMatch = numberMatch.hasMatch();

    if (digitHasMatch == false){
        QMessageBox::information(this,"Validation","Password: \nAt least 8 characters");
        digitFlag = 1;
    }else if (upperCaseHasMatch == false){
        QMessageBox::information(this,"Validation","Password: At least one upper case character");
        upperFlag = 1;
    }else if (lowerCaseHasMatch == false){
        QMessageBox::information(this,"Validation","Password: At least one lower case character");
        lowerFlag = 1;
    }else if (specialCharacterCaseHasMatch == false){
        QMessageBox::information(this,"Validation","Password: At least one special character (@, !, ?, #)");
        specialCharacterFlag = 1;
    }else if (numberHasMatch == false){
        QMessageBox::information(this,"Validation","Password: At least one number");
        numberFlag = 1;
    }

    int totalFlagNum = digitFlag + upperFlag + lowerFlag + numberFlag + specialCharacterFlag;

    if (totalFlagNum == 0){
        result = true;
    } else {
        result = false;
    }
    return result;
}



bool Common::isPasswordMatch()
{
    password = ui->lineEditPassword->text();
    passwordConfirm = ui->lineEditPasswordConfirm->text();

    if (password==passwordConfirm)
    {
        return true;
    }else{
       QMessageBox::information(this,"Common","The password doesn't match");
    }
}

bool Common::isEmailValid(QString email)
{
    QRegularExpression digit("(\\w+)(\\.|_)?@(\\w+)(\\.(\\w+))");
    QRegularExpressionMatch match = digit.match(email);

    bool hasMatch = match.hasMatch();

    if (hasMatch==true)
    {
        return true;
    }else{
       QMessageBox::information(this,"Common","Please enter a valid email address");
    }
}

bool Common::isEmailExist(QString email)
{
    QSqlQuery query(db);

    query.exec("select count(*) from user WHERE email='"+email+"'");
    query.next();
    int exsistingUserCount = query.value(0).toInt();

    if (exsistingUserCount == 0) {
        return true;

    }else{
        QMessageBox::information(this,"Common","Your email address is already registered.");
        return false;
    }
}
