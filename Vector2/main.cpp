#include <QCoreApplication>
#include <QList>
#include <QDebug>

#include <QStack>
#include <QQueue>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //////////////////////////////////////////////////////////////////
    //1. Vector
    //////////////////////////////////////////////////////////////////
//    QVector<double> vect(8);
//    vect[0]=1.0;
//    vect[1]=3.56;
//    vect[4]=900.8;

//    QVector<double> vect1;
//    vect1.append(1.0);
//    vect1.append(45.0);

//    vect1<<56.7<<78.9<<89.7;


    //////////////////////////////////////////////////////////////////
    //2.
    //////////////////////////////////////////////////////////////////





    //////////////////////////////////////////////////////////////////
    //3. QList<QString>
    //////////////////////////////////////////////////////////////////
//    QList<QString> stringList;

//    stringList << " Ryuu " << " ABCD " << " XYZ";       //Put data in the list
//    stringList.append(" EFG ");

////    qDebug() << "First item in the list is :" << stringList[0];
//    qsizetype i = stringList.indexOf("ABCD");

//    qDebug() << "ABCD at position :" << QString::number(i);

//    for (qsizetype i=0; i < stringList.size(); ++i){
//       if(stringList.at(i)=="ABCD")
//           qDebug() << "ABCD at position :" << QString::number(i);
//    }


    //////////////////////////////////////////////////////////////////
    //4. QList<int>
    //////////////////////////////////////////////////////////////////
//    QList<int> intList;

//    intList << 1 << 2 << 3;
//    qDebug() << "First item in the list is :" << intList[0];



//    QList<float> newList;
//    newList << 1.1 << 2.2 << 3.3;

//    QListIterator<float> k(newList);
//    while(k.hasNext()){
//        float f=k.next();
//        qDebug()<<"Number is :"<<QString::number(f)<<"\n";
//    }

//    QListIterator<float> p(newList);
//    p.toBack();
//    while (p.hasPrevious()) {
//        float f = p.previous();
//        qDebug()<<"Number is :"<<QString::number(f)<<"\n";
//    }

    //////////////////////////////////////////////////////////////////
    //5. QStack
    //////////////////////////////////////////////////////////////////
//    QStack<int> stack;
//    stack.push(1);
//    stack.push(2);
//    stack.push(3);
//    while (!stack.isEmpty())
//        qDebug() << QString::number(stack.pop());


    //////////////////////////////////////////////////////////////////
    //6. QQueue
    //////////////////////////////////////////////////////////////////
//    QQueue<int> queue;
//    queue.enqueue(1);
//    queue.enqueue(2);
//    queue.enqueue(3);
//    while (!queue.isEmpty())
//        qDebug() << QString::number(queue.dequeue());



    //////////////////////////////////////////////////////////////////
    //6. QMap
    //////////////////////////////////////////////////////////////////
//    QMap<QString, int> map;
//    map["one"] = 1;
//    map["three"] = 3;
//    map["seven"] = 7;

//    map.insert("twelve", 12);
//    map.insert("thirteen", 13);

//    int num1 = map["thirteen"];
//    int num2 = map.value("thirteen");

//    qDebug() << QString::number(num1);



//    if (map.contains("one")){
//        int latestOne = map.value("one");
//        qDebug()<<QString::number(latestOne);
//    }


//    //qmapiterator
//    QMapIterator<QString, int> i(map);
//    while (i.hasNext()) {
//        i.next();
//        qDebug() << i.key() << ": " << i.value();
//    }


//    map.insert("plenty", 100);
//    map.insert("plenty", 2000);

//    foreach (int value, map)
//        qDebug() << value;


    //////////////////////////////////////////////////////////////////
    //7. QSet
    //////////////////////////////////////////////////////////////////
//    QSet<QString> set;

//    set << "January" << "Febrary" << "December";

//    QSet<QString>::const_iterator n;

//    for (n=set.begin(); n != set.end(); ++n)
//        qDebug() << *n;


    //////////////////////////////////////////////////////////////////
    //8. QMultiMap
    //////////////////////////////////////////////////////////////////
    QMultiMap<QString, int> map1, map2, map3;

    map1.insert("plenty", 100);
    map1.insert("plenty", 2000);
    // map1.size() == 2

    map2.insert("plenty", 5000);
    // map2.size() == 1

    map3 = map1 + map2;
    // map3.size() == 3

    QList<int> values = map3.values("plenty");
    for (int i = 0; i < values.size(); ++i)
        qDebug()<<QString::number(values.at(i));





    return a.exec();
}
