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
    void on_checkBoxApple_toggled(bool checked);

    void on_checkBoxOrange_toggled(bool checked);

    void on_checkBoxOption1_toggled(bool checked);

    void on_checkBoxOption2_toggled(bool checked);

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    int score = 0;
};
#endif // WIDGET_H
