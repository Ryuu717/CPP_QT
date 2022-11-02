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
       void calculate_calories();
       void weight_changed(double weight);
       void time_changed(double time);
       void speed_changed(double speed);

       void on_pushButton_clicked();

signals :
       void calory_count_changed();
       void weightChanged();

private:
    Ui::Widget *ui;
    double m_time;
    double m_speed;
    double m_calory_count;
    double m_weight=0.0;
};
#endif // WIDGET_H
