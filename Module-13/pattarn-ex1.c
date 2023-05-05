#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int i, j, n;
    scanf("%d", &n);
    int k = n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}