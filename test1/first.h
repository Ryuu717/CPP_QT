#ifndef first_H
#define first_H

#include <QMainWindow>
#include <second.h>
#include <QTimer>

namespace Ui {
class first;
}

class first: public QMainWindow
{
    Q_OBJECT

public:
    explicit first(QWidget *parent = 0);
    ~first();

private slots:
    void on_pushButton_clicked();
    void changeWindow();

private:
    Ui::first *ui;
    second *second;
    QTimer * timer;
};

#endif // first_H
