#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("1 ");
        }
        else if (arr[i] < 0)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
    }

    return 0;
}