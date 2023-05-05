#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int i, n;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("arr[%d] - even : %d\n", i, arr[i]);
        }
        else
        {
            printf("arr[%d] - odd : %d\n", i, arr[i]);
        }
    }

    return 0;
}