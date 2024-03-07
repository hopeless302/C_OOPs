#include <iostream>

class complex
{
  int a, b;

public:
  void number(int m1, int m2)
  {
    a = m1;
    b = m2;
  }
  void printNumber()
  {
    std::cout << "The value of: " << a << "and" << b << std::endl;
  };
};

int main()
{

  complex name;
  name.number(1, 2);
  name.printNumber();
  name.number(5, 6);
  name.printNumber();
  return 0;
}