#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1001];
    int i, temp = 0;
    int cheaker = 1;

    scanf("%s", a);

    for (i = 0; i < strlen(a) / 2; i++)
    {
        temp = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = temp;
    }

    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] != a[strlen(a) - i - 1])
        {
            cheaker = 0;
            break;
        }
    }

    if (cheaker)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
