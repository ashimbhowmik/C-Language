#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, b, c, d, num;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    num = a / (b * c * d);
    printf("%d", num);

    return 0;
}