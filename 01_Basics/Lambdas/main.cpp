#include <iostream>


int main()
{
    //Reference
    //https://cpprefjp.github.io/lang/cpp11/lambda_expressions.html

    //Lambda expressions
    //[capture list] (parameter list) ->return_value_type {function body}



    //1. Give lambda function a name and call it
//    auto func = [](){
//        std::cout << "Hello World!" << std::endl;
//    };
//    func();



    //2. Call lambda function directly after definition
//    [](){
//            std::cout << "Hello World!" << std::endl;
//    }();


    //3. Define a lambda function that takes parameters
//    [](int a , int b){
//        std::cout << " a + b = " << a + b << std::endl;
//    }(7,3);



    //4. Store the lambda variable
//    auto func = [](int a , int b){
//        std::cout << " a + b = " << a + b << std::endl;
//    };
//    func(7,38);




    //5. Define a lambda that returns something
//    auto func = [](int a , int b)->int{
//        return a + b;
//    };
//    auto value = func(7,3);
//    std::cout << "The sum is : " << value << std::endl;



    //6. Define a lambda that returns something
//    std::cout << "The sum is : " <<  [](int a , int b)->int{
//        return a + b;
//    }(7,33) << std::endl;



    //7. Capture Lists
//    int a = 7;
//    int b = 3;
//    [a,b]()
//    {
//        std::cout << " a + b = " << a + b <<std::endl;
//    }();




    //8. Capturing by value
//    int c = 42;
//    auto func = [c](){
//        std::cout << "The inner value of c is : " << c << std::endl;
//    };

//    for (int i = 1 ; i < 5 ; i++)
//    {
//        std::cout << "The outer value of c is : " << c << std::endl;
//        func();
//        c = c + 1;
//    }


    //9. Capturing by reference
//    int c = 42;

//    auto func = [&c](){
//        std::cout << "The inner value of c is : " << c << std::endl;
//    };

//    for (int i = 1 ; i < 5 ; i++)
//    {
//        std::cout << "The outer value of c is : " << c << std::endl;
//        func();
//        c = c + 1;
//    }



    //10. Capture everything by value
    int c = 42;
    int d = 6;

    auto func = [=](){
        std::cout << "The inner value of c is : " << c << std::endl;
        //std::cout << "The inner value of d is : " << d << std::endl;
    };

    for (int i = 1 ; i < 5 ; i++)
    {
        std::cout << "The outer value of c is : " << c << std::endl;
        func();
        c = c + 1;
    }


    //11. Capturing everything by reference
//    int c = 42;
//    int d = 6;

//    auto func = [&](){
//        std::cout << "The inner value of c is : " << c << std::endl;
//        //std::cout << "The inner value of d is : " << d << std::endl;
//    };

//    for (int i = 1 ; i < 5 ; i++)
//    {
//        std::cout << "The outer value of c is : " << c << std::endl;
//        func();
//        c = c + 1;
//    }




    return 0;
}
