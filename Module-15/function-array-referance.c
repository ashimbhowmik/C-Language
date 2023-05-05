#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *arr, int n)
{

    // way of array
    // array ekta pointer ja sudhu 1st index ke ney
    *arr = 500;
    *(1 + arr) = 99;
    *(arr + 2) = 300;
    3 [arr] = 10;
    arr[4] = 78;

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    fun(arr, n);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}