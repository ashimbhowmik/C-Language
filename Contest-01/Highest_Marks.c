#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    int n, i, min = INT_MIN;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (min < a[i])
        {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            printf("0 ");
        }
        else
        {
            printf("%d ", min - a[i]);
        }
    }

    return 0;
}