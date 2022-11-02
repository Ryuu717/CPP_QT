#include <QCoreApplication>
#include <QProperty>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QProperty<QString> firstname("John");
    QProperty<QString> lastname("Smith");
    QProperty<int> age(41);

    QProperty<QString> fullname;
    fullname.setBinding([&]() { return firstname.value() + " " + lastname.value() + " age: " + QString::number(age.value()); });

    qDebug() << fullname.value(); // Prints "John Smith age: 41"
    firstname = "Emma"; // Triggers binding reevaluation'

    qDebug() << fullname.value(); // Prints the new value "Emma Smith age: 41"

    // Birthday is coming up
    age.setValue(age.value() + 1); // Triggers re-evaluation
    qDebug() << fullname.value(); // Prints "Emma Smith age: 42"
    return a.exec();
}


