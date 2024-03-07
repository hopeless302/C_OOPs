#include <iostream>
using namespace std;

int main()
{
  // What is a pointer? ----> Data type which holds the address of other data types
  int a = 3;
  int *b;
  b = &a;

  // & ---> (Address of) Operator
  cout << "The address of a is " << &a << endl;
  cout << "The address of a is " << b << endl;

  // * ---> (value at) Dereference operator
  cout << "The value at address b is " << *b << endl;

  int a = 2;

  int *b = &a;

  std::cout << &a << std::endl;
  std::cout << *b;

  return 0;
}
