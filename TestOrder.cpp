// File: TestOrder
// Created by Sean Bigler on 10/26/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include"Order.h"
using namespace std;
// Constants, Structs, Classes


// Prototypes
int const SIZE = 4;

// Main Program
int main()
{
    int n1 = 99, n2 = 11;
    int n3 = 22, n4 = 33;
    int arn[SIZE] = {n1, n2, n3, n4};

    cout << "n1 = " << n1 << " n2 = " << n2 << endl;
    cout << "n3 = " << n3 << " n4 = " << n4 << endl;
    // Sort Numbers
    sort2num(&n1, &n2);

    cout << "n1 = " << n1 << " n2 = " << n2 << endl;
    cout << "n3 = " << n3 << " n4 = " << n4 << endl;
    bsort(arn, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " element is: " << arn[i] << endl;
    }

    return 0;
}

// Function Definitions