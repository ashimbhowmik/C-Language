#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, j, k = 1, i;
    scanf("%d", &n);
    int s = n - 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf(" ");
        }
        s--;

        if (i % 2 == 0)
        {
            for (j = 0; j < k; j++)
            {
                printf("^");
            }
        }
        else
        {
            for (j = 0; j < k; j++)
            {
                printf("*");
            }
        }

        k = k + 2;
        printf("\n");
    }
    return 0;
}