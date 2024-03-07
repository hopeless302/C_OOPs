#include <iostream>

class implicit
{
  int a;

public:
  implicit(int b) // we called this a implicit copy constructor;
  {
    a = b;
    std::cout << "The value of a: " << a << std::endl;
  }
};
class ExplicitClass
{
  int a;

public:
  ExplicitClass(int b)
  {
    a = b;
  }
  ExplicitClass(ExplicitClass &obj) // we called this a Explicit copy constructor;
  {
    a = obj.a;
    std::cout << "The value of a: " << a << std::endl;
  }
};

int main()
{
  implicit gg(20), gg1(5);
  ExplicitClass bb(66);
  ExplicitClass bb1(bb); // Copy constructor is called here
}