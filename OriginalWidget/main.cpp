#include <QApplication>
#include <myWidget.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myWidget w;
    w.setWindowTitle("myWidget");
    w.show();

    return a.exec();
}
