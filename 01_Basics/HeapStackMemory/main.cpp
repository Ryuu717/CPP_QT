#include <QCoreApplication>
#include <QDebug>
#include "house.h"


void do_stuff(){
    //1. Stack memory
    House h1(nullptr,"First"); // Stack object
    h1.print_info();


    //2. Heap memory
    House* p_h1 = new House(nullptr,"Second");
    p_h1->print_info();
    delete p_h1;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    do_stuff() ;

    qDebug() << "Done!";

    return a.exec();
}


//Parameter                                     STACK                                                   HEAP
//Basic                             Memory is allocated in a contiguous block.                  Memory is allocated in any random order.
//Flexibility                       Fixed-size                                                  Resizing is possible
//Allocation and De-allocation      Automatic by compiler instructions.                         Manual by the programmer.
//Implementation                    Easy                                                        Hard
//Main Issue                        Shortage of memory                                          Memory fragmentation

//Cost                              Less                                                        More

//Access time                       Faster                                                      Slower
//Locality of reference             Excellent                                                   Adequate
//Safety                            Thread safe, data stored can only be accessed by owner      Not Thread safe, data stored visible to all threads
//Data type structure               Linear                                                      Hierarchical
//Preferred                         Static memory allocation is preferred in array.             Heap memory allocation is preferred in the linked list.
//Size                              Small than heap memory.                                     Larger than stack memory.
