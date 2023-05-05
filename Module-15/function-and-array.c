#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 1st way

// void fun(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// 2nd way

void fun(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int arr[5] = {10, 20, 30, 50, 4};

    int n = sizeof(arr) / sizeof(int);
    printf("%d\n", n);
    fun(arr, n);

    return 0;
}