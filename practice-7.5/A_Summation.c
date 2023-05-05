#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    long long int n, i, sum = 0, x = 0;
    scanf("%lld", &n);

    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    if (sum < 0)
    {
        x = -sum;
        printf("%lld", x);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}