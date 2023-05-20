#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a, b, c, d;
    int sum;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a - (b + c + d);
        printf("%d\n", sum);
    }

    return 0;
}
