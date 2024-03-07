#include <iostream>

struct talha
{
  std::string name;
  int age;
  bool sad;
};

int main()
{

  talha condition1;
  condition1.name = "talha";
  condition1.age = 20;
  condition1.sad = true;

  std::cout << condition1.name << '\n';
  std::cout << condition1.age << '\n';
  std::cout << condition1.sad << '\n';

  talha condition2;
  condition2.name = "talha";
  condition2.age = 20;
  condition2.sad = false;

  std::cout << condition2.name << '\n';
  std::cout << condition2.age << '\n';
  std::cout << condition2.sad << '\n';

  return 0;
}