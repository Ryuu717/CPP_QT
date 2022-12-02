#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include <QDialog>

#include <QSqlDatabase>

namespace Ui {
class ReturnBook;
}

class ReturnBook : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnBook(QWidget *parent = nullptr);
    ~ReturnBook();

    void returnbook();

    QSqlDatabase db;

private:
    Ui::ReturnBook *ui;
};

#endif // RETURNBOOK_H
