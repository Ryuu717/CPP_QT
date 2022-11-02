#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Declare values
    m_weight = ui->weightSpinBox->value();
    m_time = ui->timeSpinBox->value();
    m_speed = ui->speedSpinBox->value();

    //Connect ui components to respective slots
    connect(ui->weightSpinBox,&QDoubleSpinBox::valueChanged,
            this,&Widget::weight_changed);
    connect(ui->timeSpinBox,&QDoubleSpinBox::valueChanged,
            this,&Widget::time_changed);
    connect(ui->speedSpinBox,&QDoubleSpinBox::valueChanged,
            this,&Widget::speed_changed);

    //Display the calory count
    connect(this,&Widget::calory_count_changed,[=](){
        ui->caloryCountLabel->setText(QString::number(m_calory_count));
    });
    calculate_calories();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::calculate_calories()
{
    //CB = [0.0215 x KPH^3 - 0.1765 x KPH^2 + 0.8710 x KPH + 1.4577] x WKG x T
    m_calory_count = ( (0.0215 * (m_speed * m_speed * m_speed)) - (0.1765 * (m_speed * m_speed))
                            +(0.8710 * m_speed) + 1.4577) * m_weight * m_time;
    emit calory_count_changed();

}

void Widget::weight_changed(double weight)
{
    m_weight = weight;
}

void Widget::time_changed(double time)
{
    m_time = time;
}

void Widget::speed_changed(double speed)
{
    m_speed = speed;
}


void Widget::on_pushButton_clicked()
{
    calculate_calories();
}
