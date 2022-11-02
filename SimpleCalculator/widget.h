#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_ButtonAdd_clicked();

    void on_ButtonQuit_clicked();

    void on_ButtonReset_clicked();

private:
    Ui::Widget *ui;
//    double LineNum1;
//    double LineNum2;
//    double LineResult;
};
#endif // WIDGET_H
