#include <iostream>

int main()
{

  double pi = 3.14;
  // if I want to change the value of double i just need to change pi and but if i using const beofore the double i can't able to change the value of the pi like
  pi = 5.12;

  int area = 33;

  std::cout << "The circumference of the area is: " << pi * area << '\n';
};