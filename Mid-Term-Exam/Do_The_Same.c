#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int x, y, i, j;
    scanf("%d %d", &x, &y);

    for (i = 0; i < y; i++)
    {
        for (j = 1; j <= x; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}