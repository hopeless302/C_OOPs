#include <iostream>

class Address
{
public:
  std::string address;

  Address(std::string add)
  {
    address = add;
  }
};
class Email
{
private:
  Address *name;
  std::string country;

public:
  Email(std::string o, Address *c)
  {
    country = o;
    name = c;
  }
  void display()
  {
    std::cout << "The name is: " << country << std::endl;
    std::cout << "The address is: " << name->address;
  }
};
int main()
{
  Address a("Rawalpindi");
  Email e("Talha", &a);
  e.display();
  return 0;
}
