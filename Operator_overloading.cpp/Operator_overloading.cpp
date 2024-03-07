#include <iostream>

class student
{
public:
  int a;
  int b;

  student(int a, int b)
  {
    this->a = a;
    this->b = b;
  }

  student operator+(student &obj) const
  {
    student result(a + obj.a, b + obj.b);
    return result;
  }
};

int main()
{
  student t(23, 25), t1(34, 54);
  student t2 = t + t1;
  std::cout << t2.a + t2.b;

  return 0;
}
