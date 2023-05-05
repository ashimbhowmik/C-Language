// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {

//     int n, i, checker, flag = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     checker = arr[0];

//     for (i = 0; i < n; i++)
//     {

//         if (checker > arr[i])
//         {
//             checker = arr[i];
//             flag = i + 1;
//         }
//     }
//     if (checker == arr[0])
//     {
//         printf("%d %d", checker, flag + 1);
//     }
//     else
//     {
//         printf("%d %d", checker, flag);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
int main()
{

    int n, i, checker = INT_MAX, flag;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (checker > arr[i])
        {
            checker = arr[i];
            flag = i + 1;
        }
    }
    printf("%d %d", checker, flag);

    return 0;
}