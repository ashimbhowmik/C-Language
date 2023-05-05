#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char a[1001], b[1001];

    int st1, st2;

    scanf("%s", a);
    scanf("%s", b);

    st1 = strlen(a);
    st2 = strlen(b);

    printf("%d %d\n", st1, st2);
    printf("%s %s\n", a, b);

    return 0;
}