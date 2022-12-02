#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QChartView>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void createBarChart();

private:
    QList<QChartView *> charts;
    Ui::Widget *ui;

    QChart *createBarChart(int valueCount) const;
};
#endif // WIDGET_H
