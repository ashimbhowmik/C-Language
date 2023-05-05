#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[11], b[11];
    int sn, sn1, i, temp = 0;
    scanf("%s %s", a, b);
    sn = strlen(a);
    sn1 = strlen(b);

    printf("%d %d\n", sn, sn1);
    printf("%s%s\n", a, b);

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}