#include <iostream>
using namespace std;
const int LENGTH = 5;
void Increment(int* inc);



int main()
{
    int i = 9;
    int* pi;

    int iarr[LENGTH] = {4, 8, 15, 16, 23};
    int* piarr;
    piarr =  iarr;  // Get address of the array, or element 0
    // Do not use & operator on arrays

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

    for (int i = 0; i < LENGTH; i++)
    {
        cout << iarr[i] << endl;
    }
    for (int i = 0; i < LENGTH; i++)
    {
        cout << *(iarr+i) << endl;
    }
    for (int i = 0; i < LENGTH; i++)
    {
        cout << *(piarr++) << endl;
    }

    Increment(&i);

    cout << "value of i is: " << i << endl;
    cout << "value of the value living at address pi is: " << *pi << endl;  // *pi displays value at that address


    return 0;
}

void Increment(int *inc)
{
    *inc += 1;
}