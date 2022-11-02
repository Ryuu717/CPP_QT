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
    void add();
    void value1_changed(double value1);
    void value2_changed(double value2);
    void value3_changed(double value3);
    void value4_changed(double value4);

signals :
    void total_changed();

private:
    Ui::Widget *ui;
    double total;
    double v1;
    double v2;
    double v3;
    double v4;
};
#endif // WIDGET_H
