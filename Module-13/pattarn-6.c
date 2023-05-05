#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, j, k = 1, i;
    scanf("%d", &n);
    int s = n - 1;

    for (i = 1; i <= (n * 2); i++)
    {

        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= k; j++)
        {
            printf("*");
        }

        if (i <= n - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }

        printf("\n");
    }
    return 0;
}