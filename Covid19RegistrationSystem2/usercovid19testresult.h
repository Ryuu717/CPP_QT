#ifndef USERCOVID19TESTRESULT_H
#define USERCOVID19TESTRESULT_H

#include <QDialog>

namespace Ui {
class UserCovid19TestResult;
}

class UserCovid19TestResult : public QDialog
{
    Q_OBJECT

public:
    explicit UserCovid19TestResult(QWidget *parent = nullptr);
    ~UserCovid19TestResult();

//    void goHome();


//signals:
//    void clicked();

private:
    Ui::UserCovid19TestResult *ui;
};

#endif // USERCOVID19TESTRESULT_H
