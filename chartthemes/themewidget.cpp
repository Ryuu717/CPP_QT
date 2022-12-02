// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "themewidget.h"
#include "ui_themewidget.h"

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

//#include <QtCharts/QBarCategoryAxis>
//#include <QtWidgets/QApplication>
//#include <QtWidgets/QFormLayout>


ThemeWidget::ThemeWidget(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui_ThemeWidgetForm)
{
    m_ui->setupUi(this);

    //create charts
    QChartView *chartView;

    chartView = new QChartView(createBarChart(m_valueCount));
    m_ui->gridLayout->addWidget(chartView, 2, 0);
    m_charts << chartView;

}

ThemeWidget::~ThemeWidget()
{
    delete m_ui;
}


QChart *ThemeWidget::createBarChart(int valueCount) const
{
    Q_UNUSED(valueCount);
    QChart *chart = new QChart();
    chart->setTitle("Bar chart");

//    QStackedBarSeries *series = new QStackedBarSeries(chart);
//    for (int i = 0; i < m_dataTable.count(); i++) {

//        QBarSet *set = new QBarSet("Bar set " + QString::number(i));
//        for (const Data &data : m_dataTable[i])
//            *set << data.first.y();
//        series->append(set);
//    }

    QBarSet *set0 = new QBarSet("Jane");
//    QBarSet *set1 = new QBarSet("John");
//    QBarSet *set2 = new QBarSet("Axel");
//    QBarSet *set3 = new QBarSet("Mary");
//    QBarSet *set4 = new QBarSet("Samantha");
//    QBarSet *set5 = new QBarSet("Samantha");
//    QBarSet *set6 = new QBarSet("Samantha");

    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
//    *set1 << 5 << 0 << 0 << 4 << 0 << 7;
//    *set2 << 3 << 5 << 8 << 13 << 8 << 5;
//    *set3 << 5 << 6 << 7 << 3 << 4 << 5;
//    *set4 << 9 << 7 << 5 << 3 << 1 << 2;
//    *set5 << 9 << 7 << 5 << 3 << 1 << 2;
//    *set6 << 9 << 7 << 5 << 3 << 1 << 2;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
//    series->append(set1);
//    series->append(set2);
//    series->append(set3);
//    series->append(set4);
//    series->append(set5);
//    series->append(set6);

//    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Batting Avg by Year");
    // NoAnimation, GridAxisAnimations, SeriesAnimations
    chart->setAnimationOptions(QChart::AllAnimations);
    QStringList categories;
    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";

//    QBarCategoryAxis *axis = new QBarCategoryAxis();
//    axis->append(categories); chart->createDefaultAxes();
////    chart->setAxisX(axis, series);
//    chart->legend()->setVisible(true);
//    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

//    QPalette pal = qApp->palette();
//    pal.setColor(QPalette::Window, QRgb(0xfffff ));
//    pal.setColor(QPalette::WindowText, QRgb(0x404040));
//    qApp->setPalette(pal);




//    chart->addSeries(series);

    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0, 10 * 2);
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");

    return chart;
}
