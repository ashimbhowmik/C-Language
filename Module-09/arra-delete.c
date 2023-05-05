#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i, pos;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}