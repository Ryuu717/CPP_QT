#include <iostream>


class Rectangle{
public :
    void set_width(int width);
    void set_height(int height);
    double get_area()const;

private:
    double m_width;
    double m_height;
};


//Implementations
void Rectangle::set_width(int width){
    m_width = width;
}
void Rectangle::set_height(int height){
    m_height = height;
}
double Rectangle::get_area()const{
    return m_width * m_height;
}


int main()
{
    Rectangle rectangle;
    rectangle.set_width(10);
    rectangle.set_height(30);
    std::cout << "area : " << rectangle.get_area() << std::endl;

    return 0;
}
