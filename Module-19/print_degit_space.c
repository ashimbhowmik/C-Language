#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int n, int i)
{

    if (n == i)
        return;
    int x = n % 10;
    fun(n / 10, i);
    printf("%d ", x);
}

int main()
{

    int y;
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
    {
        int n, i = 0;
        scanf("%d", &n);
        fun(n, i);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}
