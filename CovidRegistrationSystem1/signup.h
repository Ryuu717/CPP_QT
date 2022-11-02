#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "QtWidgets/qpushbutton.h"
#include "login.h"

namespace Ui {
class Signup;
}

class Signup : public QWidget
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();


//private:
    Ui::Signup *ui;

    Signup *signup;
    Login *login;

    QPushButton * pushButton;

};

#endif // SIGNUP_H
