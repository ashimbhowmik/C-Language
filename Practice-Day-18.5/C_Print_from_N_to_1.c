#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// one way to solve.........................................

// void fun(int n)
// {
//     if (n == 0)
//         return;

//     printf("%d", n);
//     if (n != 1)
//     {
//         printf(" ");
//     }
//     fun(n - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     fun(n);

//     return 0;
// }

// two way to solve............................................

// void fun(int n, int i)

// {

//     if (i == n + 1)
//         return;

//     fun(n, i + 1);

//     printf("%d", i);
//     if (i != 1)
//     {
//         printf(" ");
//     }
// }

// int main()
// {

//     int n, i = 1;
//     scanf("%d", &n);

//     fun(n, i);

//     return 0;
// }

// 3rd way to solve....................................

void fun(int n)

{

    if (n == 0)
        return;

    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }
    fun(n - 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    fun(n);

    return 0;
}