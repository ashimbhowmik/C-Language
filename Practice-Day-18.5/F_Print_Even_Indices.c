#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *arr, int x, int i)
{
    if (i == x)
        return;

    fun(arr, x, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int n, i = 0;
    scanf("%d", &n);
    int arr[n];

    int x = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, x, i);

    return 0;
}