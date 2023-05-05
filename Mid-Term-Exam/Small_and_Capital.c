#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[1001];
    int i, s = 0, l = 0;
    scanf("%s", a);

    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            s++;
        }
        else
        {
            l++;
        }
    }
    printf("%d %d", l, s);
    return 0;
}