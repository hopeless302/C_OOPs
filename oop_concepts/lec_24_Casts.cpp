#include <iostream>
class base
{
public:
  void Myfunction()
  {
    std::cout << "This is a base class" << std::endl;
  }
};

class derivedClass : public base
{
public:
  void Myfunction()
  {
    std::cout << "This is a derived class" << std::endl;
  }
};

int main()
{
  // static_cast base class to derived class
  // reinterpret_cast base class to derived class
  base *b = new derivedClass;
  b->Myfunction();
  derivedClass *d = static_cast<derivedClass *>(b);
  d->Myfunction();
  // dynamic_cast derived class to base class
  std::cout << "This is a dynamic_cast" << std::endl;
  derivedClass *d = new derivedClass;
  d->Myfunction();
  base *b = dynamic_cast<base *>(d);
  b->Myfunction();
}