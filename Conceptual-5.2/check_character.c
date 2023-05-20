#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char a[10], b, c, d;
    scanf("%s %c %c %c", a, &b, &c, &d);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != b && a[i] != c && a[i] != d)
        {
            printf("%c", a[i]);
        }
    }

    return 0;
}