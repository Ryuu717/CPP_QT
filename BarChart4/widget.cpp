#include "widget.h"
#include "./ui_widget.h"

#include <QtCharts/QChartView>
#include <QtCharts/QAbstractBarSeries>
#include <QtCharts/QPercentBarSeries>
#include <QtCharts/QStackedBarSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtCore/QRandomGenerator>
#include <QtCharts/QValueAxis>

#include <QtCharts/QBarCategoryAxis>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //create charts
    QChartView *chartView;

    int m_valueCount = 6;

    chartView = new QChartView(createBarChart(m_valueCount));
    ui->gridLayout->addWidget(chartView, 2, 0);
    charts << chartView;
}

Widget::~Widget()
{
    delete ui;
}


QChart *Widget::createBarChart(int valueCount) const
{
    Q_UNUSED(valueCount);
    QChart *chart = new QChart();
    chart->setTitle("Bar chart");

    QBarSet *set = new QBarSet("Count");

    *set << 1 << 2 << 3 << 4 << 5 << 10;

    QBarSeries *series = new QBarSeries();
    series->append(set);

    chart->addSeries(series);
    chart->setTitle("Summary");

    //Animation
    chart->setAnimationOptions(QChart::AllAnimations);

    //Axis name
    QStringList categories;
    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);

    chart->createDefaultAxes();
    chart->setAxisX(axisX, series);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

//    QValueAxis *axisX = new QValueAxis;
//    axisX->setRange(10, 20.5);
//    chartView->chart()->setAxisX(axisX, series);

    //Axis
//    chart->createDefaultAxes();
//    chart->axes(Qt::Vertical).first()->setRange(0, 20);

    // Add space to label to add space between labels and axis
//    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
//    Q_ASSERT(axisY);
//    axisY->setLabelFormat("%.1f  ");

    return chart;
}
