#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    long long int n, i, x, checker = 0, flag;
    scanf("%lld", &n);

    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &x);

    for (i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            checker = 1;
            flag = i;
            break;
        }
    }
    if (checker == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%lld", flag);
    }
    return 0;
}