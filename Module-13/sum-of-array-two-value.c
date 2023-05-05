#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, y, i, j, x, flag = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 1;
                // break;
            }
        }
    }

    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}