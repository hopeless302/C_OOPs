#include <iostream>

int main()
{

  std::string Name;
  int age;

  std::cout << "What is your Name: ";
  std::getline(std::cin >> std::ws, Name);

  std::cout << "What is Your age: ";
  std::cin >> age;

  std::cout << "you are: " << age << "\nAnd your Name is: " << Name;
}