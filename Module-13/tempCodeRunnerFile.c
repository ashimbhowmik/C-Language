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
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        // line ses bujhay
        k = k + 2;
        printf("\n");
    }
    return 0;
}