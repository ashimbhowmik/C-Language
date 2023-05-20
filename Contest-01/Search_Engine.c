#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int x, j, flag = 0;
        scanf("%d", &x);
        int a[x];
        for (j = 0; j < x; j++)
        {
            scanf("%d", &a[j]);
        }
        int s;
        scanf("%d", &s);
        for (j = 0; j < x; j++)
        {
            if (s == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            printf("Case %d: Not Found\n", i);
        }
        else
        {
            printf("Case %d: %d\n", i, j + 1);
        }
    }

    return 0;
}