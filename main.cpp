#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    int j = 10;
    int* pi;
    cout << "value of i is: " << i << endl;
    cout << "address of i is: " << &i << endl;

    pi = &i;
    cout << "value of pi is: " << pi << endl;
    cout << "address of pi is: " << &pi << endl;

    // Display the value living at pi
    // Dereference operator *
    cout << "value of the value living at address pi is: " << *pi << endl;  // *pi displays value at that address

    i  = 10;
    cout << "value of i is: " << i << endl;
    cout << "value of the value living at address pi is: " << *pi << endl;  // *pi displays value at that address

    // Modify value using pointer
    *pi = 11;
    cout << "value of i is: " << i << endl;
    cout << "value of the value living at address pi is: " << *pi << endl;  // *pi displays value at that address


    return 0;
}