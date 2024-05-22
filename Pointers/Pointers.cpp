#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a; //Know ptr stores the address of the variable a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << ptr << endl;
    int &b = a; //Know b is a reference to a
    cout << "Value of b: " << b << endl;
    b = 20;
    cout << "value of a is know change using reference: " << a << endl;
    cout<< "Address of a and b is same: " << ptr << " " << &b << endl; //Both will have same address
    return 0;
}