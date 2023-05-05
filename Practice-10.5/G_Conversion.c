#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[100001];
    int i, sn;
    scanf("%s", a);
    sn = strlen(a);

    for (i = 0; i < sn; i++)
    {
        // printf("%c", a[i]);
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
            printf("%c", a[i]);
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
            printf("%c", a[i]);
        }
        else if (a[i] == ',')
        {
            a[i] = ' ';
            printf("%c", a[i]);
        }
    }

    return 0;
}