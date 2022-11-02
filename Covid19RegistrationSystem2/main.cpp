#include "signup.h"
#include "landingpage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Signup w;
//    w.show();

    LandingPage l;
    l.show();

    return a.exec();
}
