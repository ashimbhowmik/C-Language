#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_zero(int *arr, int s)
{

    int count = 0;

    for (int i = 0; i < s; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        count++;
    }

    return count;
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    int s = sizeof(arr) / sizeof(int);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = count_before_zero(arr, s);
    printf("%d", count);
    return 0;
}