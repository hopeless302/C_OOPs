#include <iostream>

int main()
{

  // In this place we goonna learn about the typedef keyword which is used in c++ to change any datatype name its is really hlepfull if we want to change the name of a lengthy name like for example with stirng std::string

  typedef std::string text_t;
  text_t myName = "Talha";

  std::cout << myName;
  return 0;
}