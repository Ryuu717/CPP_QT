#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);

private:
    QSize sizeHint() const;

public:
    void button_clicked();
};

#endif // MYWIDGET_H
