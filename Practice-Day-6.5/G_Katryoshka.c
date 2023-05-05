#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    long long int x, y, z, i, a, div, n1, n2, n3;
    int count = 0, temp = 0;
    scanf("%lld %lld %lld", &x, &y, &z);

    if (x > 0 && z > 0)
    {

        if (x >= y && y <= z)
        {
            temp = count;
            count = y;
        }
        else if (x == 1)
        {
            count = 1;
        }

        x = x - count;
        z = z - count;
        // y = 0;

        if (z <= x && z <= y)
        {
            count = z;
        }
        else if (x <= y && x <= z)
        {
            for (n1 = 1; n1 <= x; n1++)
            {
                count++;
            }
        }
        else
        {
            div = x / 2;
            if (div <= z)
            {
                for (a = 1; a <= div; a++)
                {
                    count++;
                }
            }
            else if (div >= z && y)
            {
                for (n3 = 1; n3 <= z; n3++)
                {
                    count++;
                }
            }
        }
        printf("%d", count);
    }
    else
    {
        printf("0");
    }

    return 0;
}