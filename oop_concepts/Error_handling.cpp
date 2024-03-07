//********Exceptoin handling***********

#include <iostream>

// I am not using "using namespace std;"

int main()
{
  int a, b;
  std::cout << "Enter any Two numbers: ";
  std::cin >> a >> b;
  try
  {
    if (b == 0)
    {
      throw b;
    }
    else
    {
      std::cout << "The value of a/b is: " << a / b;
    }
  }
  catch (int myName)
  {
    std::cout << "Error occur: " << myName;
  }
}