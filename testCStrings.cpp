// File: cStrings
// Created by Sean Bigler on 10/26/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "cStrings.h"

using namespace std;
// Constants, Structs, Classes


// Prototypes


// Main Program
int main()
{
    char str1[] = "Defined a string as an array";   // Defined as a constant string
    char* str2 = "Defined as a pointer";            // just a pointer

    cout << str1 << endl;
    cout << str2 << endl;

    //str1++; can't do this. str1 is a constant
    str2++;
    cout << str1 << endl;
    cout << str2 << endl;

    str2++;
    cout << str2 << endl;
    str2--;
    cout << str2 << endl;

    dispstr(str1);



    return 0;
}

// Function Definitions