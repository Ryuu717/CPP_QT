#include <iostream>

int add(int a ,int b){
    return a + b;
}

float add(float a ,float b){
    return a + b;
}

double add(double a ,double b){
    return a + b;
}


void sayHi(){
    std::cout << "Hello world!" << std::endl;

}

int main()
{
  float a {3.8f};
  float b {7.3f};
  int c {34};
  int d {34};

  auto result = add(a,b);
  std::cout << "result : " << result << std::endl;
  std::cout << "sizeof(result) : " << sizeof(result) << std::endl;

  //Error (Call to add is ambiguous)
  //auto result1 = add(a,c);
  //std::cout << "result1: " << result1 << std::endl;


  for(int i = 0; i < 5; ++i){
      sayHi();
  }

    return 0;
}


