#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *arr, int s, int i)
{
    if (i == s)
        return;
    printf("%d ", arr[i]);
    fun(arr, s, i + 1);
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    int s = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, s, 0);

    return 0;
}