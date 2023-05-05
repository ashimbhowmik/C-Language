#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    sum(x, y);

    return 0;
}