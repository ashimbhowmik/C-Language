#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j;
    scanf("%d", &n);
    int x = n / 2;
    for (i = 0; i < n; i++)
    {
        if (i == x)
        {
            for (j = 0; j < n; j++)

            {
                printf("#");
            }
        }
        else
        {
            for (j = 0; j < n; j++)
            {

                if (j == x)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
            }
        }

        printf("\n");
    }

    return 0;
}