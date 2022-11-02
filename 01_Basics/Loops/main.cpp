#include <iostream>

int main()
{
      //1. For loop
      std::cout << "For loop " << std::endl;

      for ( int i = 1 ; i <= 10 ; i=i+1)
      {
          std::cout << i <<std::endl;
      }


      //2. While loop
      std::cout << "While loop " << std::endl;
      int i =1;
      while ( i <= 10)
      {
        std::cout << i <<std::endl;
        i=i+1;
      }


      //3. Do while loop
      std::cout << "Do while loop " << std::endl;
      int j = 1;
      do{
          std::cout << j <<std::endl;
          j = j + 1;
      }while( j <= 10);


    return 0;
}
