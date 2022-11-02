#include <iostream>

using namespace std;

int main()
{
    //1.cout
    std::cout << "This is a cout" << std::endl;

    //2.cerr
    std::cerr << "This is a error message" << std::endl;

    //3.clog
    std::clog << "This is a log message" << std::endl;

    //4.cin
    std::string name;
    std::cout << "Please type in your firstname : ";
    std::cin >> name;

    std::cout << "Your firstname is : " << name << std::endl;
    return 0;
}
