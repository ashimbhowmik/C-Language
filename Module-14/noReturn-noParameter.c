#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(void)
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
}

int main()
{
    sum();
    sum();
    return 0;
}