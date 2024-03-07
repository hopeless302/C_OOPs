#include <iostream>

class base
{
private:
  int a;

protected:
  int b;

public:
  void getdata()
  {
    a = 10;
    b = 20;
    std::cout << "The value of a is: " << a << std::endl
              << "The value of b is: " << b << std::endl;
  }
};
class derivedClass : public base
{
public:
  void getdata()
  {
    b = 25;
    base::getdata();
    std::cout << "This is a derivedClass: ";
  }
};
int main()
{
  derivedClass d;
  d.getdata();
  return 0;
}