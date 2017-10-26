//
// Created by w01164264 on 10/26/2017.
//
#include<iostream>
using namespace std;
#include "cStrings.h"
/**
 * Display an array of characters, one char at a time.
 * @param ptr : Pointer to string or array of chars
 */
void dispstr(const char *ptr)   // Read only pointer
{
    while (*ptr)    // Test for NULL character
    {
        cout << *ptr++;
    }
    cout << endl;
}
