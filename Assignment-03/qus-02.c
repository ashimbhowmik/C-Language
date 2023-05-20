#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j;
    scanf("%d", &n);
    int s = n - 1, k = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        s--;
        for (j = 1; j <= k; j++)
        {
            printf("%d", k);
        }
        k++;
        printf("\n");
    }

    return 0;
}