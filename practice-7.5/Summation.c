#include <stdio.h>

int main()
{

    long long int n, i, sum = 0;
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
        printf("%lld", sum = sum * (-1));
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}