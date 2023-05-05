#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    //     int n, i, j, k = 5;
    // scanf("%d", &n);

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < k; j++)
    //     {
    //         printf("%d *", i);
    //     }
    //     // k++;
    //     printf("\n");
    // }
    return 0;
}