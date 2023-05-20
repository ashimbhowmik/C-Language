#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int n, int i)
{

    if (i == n)
        return;

    printf("I love Recursion\n");

    fun(n, i + 1);
}

int main()
{

    int n, i = 0;
    scanf("%d", &n);

    fun(n, i);

    return 0;
}

// void fun(int n)
// {

//     if (n == 0)
//         return;

//     printf("I love Recursion\n");

//     fun(n - 1);
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);

//     fun(n);

//     return 0;
// }