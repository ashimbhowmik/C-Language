#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a, b, tiger = 0, pathan = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            tiger++;
        }
        else if (a < b)
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if (tiger == pathan)
    {
        printf("Draw\n");
    }
    else
    {
        printf("Pathan\n");
    }

    return 0;
}