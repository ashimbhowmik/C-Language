#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);

    int k = strlen(a);

    // string add kore
    strcat(a, b);

    // logic
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }

    for (int i = 0; i < strlen(b) / 2; i++)
    {
        a[k] = b[i];
        k++;
    }
    a[k] = '\0';
    printf("%s %s\n", a, b);

    return 0;
}