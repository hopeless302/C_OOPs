// // Accessing base class member functions in derived class
#include <iostream>
#include <conio.h>
using namespace std;
class A // Base Class
{
public:
  void getName()
  {
    cout << "Base class";
  }
};
class B : public A // Drived Class
{
public:
  void getName()
  {
    cout << "Derived class";
  }
};
int main()
{
  // A *obj = new B;
  // obj->getName();
  // B *derived = static_cast<B *>(obj);
  // derived->getName();
  // return 0;
  B obj;
  obj.getName();
}

// Implicit & Explicit Type Casting
// Same Type Conversion (Implicit)
// Different Type Conversion (Explicit)
// #include <iostream>
// #include <conio.h>
// using namespace std;
// class A
// {
//   int a;

// public:
//   A(int a) // Implicit Type Casting Constructor
//   {
//     this->a = a;
//   }
//   A(A &obj) // Explicit Type Casting Constructor
//   {
//     a = obj.a;
//   }
// };
// main()
// {
//   A obj(10);
//   A obj1(obj);
//   getch();
//   return 0;
// }