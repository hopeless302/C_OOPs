#include <iostream>

namespace talha
{
  int x = 1;
} // namespace talha

int main()
{

  // In this code we learn about what is we declare two variabe with the same name what going to happen? so if we want to declare 2 varaible with the same name we are going to use the namespace
  using namespace talha;
  int x = 4;

  std::cout << x;
};