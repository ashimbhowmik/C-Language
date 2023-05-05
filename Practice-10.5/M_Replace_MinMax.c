#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
int main()
{

    int i, n, temp = 0, x = INT_MIN, y = INT_MAX, indx1 = 0, index2 = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
            indx1 = i;
        }
        if (arr[i] < y)
        {
            y = arr[i];
            index2 = i;
        }
    }
    temp = arr[index2];
    arr[index2] = arr[indx1];
    arr[indx1] = temp;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}