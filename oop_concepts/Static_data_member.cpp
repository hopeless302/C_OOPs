#include <iostream>

class student
{
public:
  static int value;

  student()
  {
    value++;
  }
  void getvalue()
  {
    std::cout << "The value of static data member is: "
              << value;
  }
};

int student::value = 23;

int main()
{
  student obj1, obj2, obj3;
  obj1.getvalue();
  std::cout << '\n';
  obj2.getvalue();
  std::cout << '\n';
  obj3.getvalue();
}