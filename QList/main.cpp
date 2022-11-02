#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> stringList;

    //Put data in the list
    stringList << " Ryuu " << " ABCD " << " XYZ";
    stringList.append(" EFG ");

    qDebug() << "First item in the list is :" << stringList[0];


//    for( int i = 0 ; i < stringList.count() ; i++)
//    {
//        qDebug() << "The element at index "<< QString::number(i)
//                        << " is " << stringList.at(i);
//    }

    return a.exec();
}
