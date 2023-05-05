#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int x, int y)
{
    int s = x + y;
    return s;
}

int main()
{
    // int s = sum(10, 20);
    // printf("%d", s);
    printf("%d\n", sum(10, 20));
    printf("%d\n", sum(100, 200));
    return 0;
}