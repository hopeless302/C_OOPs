#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a; //Know ptr stores the address of the variable a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << ptr << endl;
}