#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int i = 1;
    while (i <= 1000000000)
    {
        if (i == 1)
        {
            printf("%d time Sorry\n", i);
        }
        else
        {
            printf("%d times Sorry\n", i);
        }
        i++;
    }

    return 0;
}