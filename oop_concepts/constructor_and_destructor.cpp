#include <iostream>
class me
{
  int a;
  // Note: constructor and destructor acutomatically called when we invoke them
  // and int a; can acess in the class anywhere within the class.
public:
  me()
  {
    a = 10;
    std::cout << "My name is Talha" << a << std::endl;
  }

  ~me()
  {
    std::cout << "destructor is called";
  }
};
int main()
{

  me talha;

  return 0;
}