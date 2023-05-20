#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void fun(int n, int i)

// {

//     if (i == n + 1)
//         return;

//     printf("%d\n", i);

//     fun(n, i + 1);
// }

// int main()
// {

//     int n, i = 1;
//     scanf("%d", &n);

//     fun(n, i);

//     return 0;
// }

void fun(int n)

{

    if (n == 0)
        return;

    fun(n - 1);
    printf("%d\n", n);
}

int main()
{

    int n;
    scanf("%d", &n);

    fun(n);

    return 0;
}