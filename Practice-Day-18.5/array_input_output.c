#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void fun(int *arr, int n, int i)
// {

//     if (i == n)
//         return;

//     printf("%d ", arr[i]);
//     fun(arr, n, ++i);
// }

// int main()
// {

//     int n, i = 0;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     fun(arr, n, i);

//     return 0;
// }

// 2nd way..................................

void fun(int *arr, int size)
{

    if (size < 0)
        return;
    fun(arr, size - 1);
    printf("%d ", arr[size]);
}

int main()
{

    int size, i = 0;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, size - 1);

    return 0;
}