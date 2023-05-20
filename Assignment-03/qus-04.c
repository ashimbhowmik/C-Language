// // Has Return + Parameter

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int sum(int n, int m)
// {
//     int sum = n + m;
//     return sum;
// }

// int main()
// {

//     int n, m;
//     scanf("%d %d", &n, &m);
//     int s = sum(n, m);
//     printf("%d", s);
//     return 0;
// }

// // Has Return + No Parameter

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int sum()
// {
//     int n, sum = 0;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     return sum;
// }

// int main()
// {

//     int s = sum();
//     printf("%d", s);
//     return 0;
// }

// // No Return + Parameter

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void sum(int n)
// {
//     if (n % 2 == 0)
//     {
//         printf("%d is even", n);
//     }
//     else if (n == 0)
//     {
//         printf("%d is zero", n);
//     }
//     else
//     {
//         printf("%d is odd", n);
//     }
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     sum(n);
//     return 0;
// }

// // No Return + No Parameter

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void sum()
// {
//     int n, i;
//     scanf("%d", &n);
//     int arr[n], count[10] = {0};
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         count[arr[i]]++;
//     }

//     for (i = 0; i < 10; i++)
//     {
//         printf("%d - %d\n", i, count[i]);
//     }
// }

// int main()
// {
//     sum();
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void fun(int x)
// {

//     x = x + 1;
//     printf("Inside funtion address of x : %p\n", &x);
//     printf("Inside : %d\n", x);
// }

// int main()
// {
//     int x = 5;
//     printf("Before : %d\n", x);
//     printf("Address of x : %p\n", &x);
//     fun(x);

//     printf("After: %d\n", x);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *x)
{
    *x = *x + 1;
    printf("Inside funtion Value of x : %p\n", x);
    printf("Inside funtion address of x : %p\n", &x);
    printf("Inside : %d\n", *x);
}

int main()
{
    int x = 5;
    printf("Before : %d\n", x);
    printf("Address of x : %p\n", &x);
    fun(&x);
    printf("After : %d\n", x);
    return 0;
}