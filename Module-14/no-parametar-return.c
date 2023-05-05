#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main()
{

    int s = sum();
    printf("%d", s);
    printf("%d", sum());
    return 0;
}