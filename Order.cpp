//
// Created by w01164264 on 10/26/2017.
//

#include "Order.h"
/**
 * Order the two numbers.
 * @param num1  First Number
 * @param num2  Second Number
 */
void sort2num(int *num1, int *num2)
{
    int temp;
    if (*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
/**
 * Bubble sort a list of integers.
 * @param ptr : Address of Array
 * @param n : How many elements
 */
void bsort(int *ptr, int n)
{
    for (int j = 0; j < n-1; j++)   // outer loop
    {
        for (int k = j+1; k < n; k++)   // inner loops
        {
            sort2num(ptr + j, ptr + k); // order two numbers
        }
    }
}
