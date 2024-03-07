#include <iostream>

class person
{
public:
  std::string name = "Talha";
  int age = 20;
  void sad()
  {
    std::cout << "Yes, it is true I am sad";
  }
};
class person2
{
public:
  std::string name1 = "Talha Anwar";
  int age1 = 22;
  void Notsad()
  {
    std::cout << "No, it is true I am sad";
  }
};
class person3 : public person, public person2
{
};

int main()
{

  person3 talha;

  std::cout << talha.person2::age1;
  return 0;
}