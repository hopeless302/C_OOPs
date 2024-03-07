// ***********"call by value"**********

// In "call by value," the actual value of the argument is passed to the function. This means that the function works with a copy of the data, and any modifications made to the parameters inside the function do not affect the original data outside the function.

#include <iostream>

void addTen(int num)
{
  num += 10;
}

int main()
{
  int number = 5;
  addTen(number);

  std::cout << "Original value: " << number << std::endl;

  return 0;
}
// In thiss example, addTen receives a copy of the variable number. Inside the function, num is modified, but this change does not affect the original number variable outside the function. The output will be "Original value: 5".

// if we use & starting of the variable it become address of that variable instead of copy of that value and that value store by a pointer *

// ***********"Call by Reference"**********
// In "call by reference," instead of passing the value itself, the memory address (reference) of the variable is passed to the function. This allows the function to directly access and modify the original data.

// ***********"THIS BELOW CODE IS CORRECT JUST TRY IT"**********
// #include <iostream>

// void addTen(int &num)
// {
//   num += 10;
// }

// int main()
// {
//   int number = 5;
//   addTen(number);

//   std::cout << "Modified value: " << number << std::endl;

//   return 0;
// }
