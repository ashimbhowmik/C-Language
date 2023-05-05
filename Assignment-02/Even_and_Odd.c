#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int N, i, sum = 0, x = 0;

    scanf("%d", &N);

    int arr[N];
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            x += arr[i];
        }
    }
    printf("%d %d", sum, x);

    return 0;
}