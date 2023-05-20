#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j, x = 1;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    int a = 0, b = (n * 2) - 1;

    for (i = 1; i <= (n * 2) - 1; i++)
    {
        if (x <= n - 1)
        {
            for (j = 1; j <= s; j++)
            {
                printf(" ");
            }
            s--;
            for (j = 1; j <= k; j++)
            {
                printf("%d", j);
            }
            k += 2;
        }
        else
        {
            for (j = 1; j <= a; j++)
            {
                printf(" ");
            }
            a++;
            for (j = 1; j <= b; j++)
            {
                printf("%d", j);
            }
            b -= 2;
        }
        x++;
        printf("\n");
    }

    return 0;
}
