#include <QCoreApplication>
#include <QDebug>
#include <memory>   //for Smart Pointer
#include "house.h"

void do_stuff(){
    //Stack memory
    //House h1(nullptr,"First");
    //h1.print_info();


    //////////////////////////////////////////////////////////
    //1. Raw pointer
    //////////////////////////////////////////////////////////
    //Heap memory
    //House* p_h1 = new House(nullptr,"First");
    //p_h1->print_info();
    //delete p_h1;


    //////////////////////////////////////////////////////////
    //2. Smart Pointer
    //////////////////////////////////////////////////////////
    //-->Give ownership of any heap-allocated resource
    //-->No need "delete" option

    //2.1 Unique ptr
    //std::unique_ptr<House> up_house_1 {new House(nullptr,"Second")};
    //up_house_1->print_info();

    //2.2 Shared ptr
    std::shared_ptr<House> shrd_ptr_1 {new House(nullptr,"Third")};
    shrd_ptr_1->print_info();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Starting...";
    do_stuff();
    qDebug() << "Ending...";

    return a.exec();
}
