#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, j, k = 1, i, x = 1;
    scanf("%d", &n);
    int s = n - 1;
    int a = 0, b = (n * 2) - 1;

    for (i = 0; i < (n * 2); i++)
    {
        if (x <= n)
        {
            for (j = 0; j < s; j++)
            {
                printf(" ");
            }
            s--;
            for (j = 0; j < k; j++)
            {
                printf("*");
            }
            k = k + 2;
        }
        else
        {
            for (j = 0; j < a; j++)
            {
                printf(" ");
            }
            a++;
            for (j = 0; j < b; j++)
            {
                printf("*");
            }
            b = b - 2;
        }
        x++;
        printf("\n");
    }
    return 0;
}