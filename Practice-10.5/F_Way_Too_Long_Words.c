#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i, sn = 0, sn1 = 0;
    scanf("%d", &n);
    char a[101];
    for (i = 0; i < n; i++)
    {
        scanf("%s", a);
        sn = strlen(a);
        if (sn <= 10)
        {
            printf("%s\n", a);
        }
        else
        {
            sn1 = strlen(a);
            sn = strlen(a) - 2;
            printf("%c%d%c\n", a[0], sn, a[sn1 - 1]);
        }
    }

    return 0;
}