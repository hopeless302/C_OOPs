/* Template With Static Members */
#include <iostream>
#include <conio.h>
using namespace std;
template <class H>
class A
{
public:
  static H data;
  A()
  {
    data++;
  }
};
template <class H>
H A<H>::data = 0;
main()
{
  A<int> obj[10]; // obj[0] obj[1] obj[2] .... obj[9]
  cout << obj[9].data;
  getch();
  return 0;
}