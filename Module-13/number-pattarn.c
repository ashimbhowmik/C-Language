#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }
    return 0;
}