#include <iostream>

class me
{
  int men;
  std::string node;

public:
  void setMen(int wo)
  {
    men = wo;
  }
  int getMen()
  {
    return men;
  }
  void setvalueString(std::string value)
  {
    node = value;
  }
  std::string getvalueString()
  {
    return node;
  }
};

int main()
{

  me talha;
  talha.setMen(24);
  std::cout << talha.getMen();

  talha.setvalueString("\nMy Name Is Talha Anwar");
  std::cout << talha.getvalueString();
  int b = 12;
  std::cout << "\nThe address where b is store is:"
            << &b;
  return 0;
}

// so it does not matter what we give the name to the setter and getter value its just to make it easier to read what is the value of the method we are gonna use.