#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int fun(int *a, int n, int i)
{
    if (n == i)
    {
        return INT_MIN;
    }
    int max = fun(a, n, i + 1);
    if (a[i] > max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
}

int main()
{

    int n, i = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = fun(a, n, i);
    printf("%d\n", max);

    return 0;
}