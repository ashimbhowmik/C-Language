#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int i, j, n;
    scanf("%d", &n);
    int s = 0, k = (n * 2) - 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf(" ");
        }
        s++;
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        k = k - 2;
        printf("\n");
    }

    return 0;
}