#include <iostream>

// using namespace std;

int main()
{
  std::cout << "My name is Talha Anwar \n";
  std::cout << "Time is really low for me \n";
  int age = 20;
  std::cout << "Your age is: " << age << "\n";

  // data type that contain value in ponit are "Doubles"
  double y = 2.6;
  std::cout << y << '\n';

  // And if you want to store ony one character you need to use the "char"
  char z = 'A';
  std::cout << z << '\n';
  // And if you want to store a boolean value we use "bool"
  bool student = true;
  bool hasname = false;
  std::cout << student << '\n';
  std::cout << hasname << '\n';

  // And if we want to store a whole new charecter not only one we need to store it on a string and remember if we are using a namespace std there is no use of std:: before any type of method define so for using string we need to use std:: that why we can not use it without the std::

  std::string name = "Talha Anwar";
  std::cout << name;
  return 0;
};