#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = n - 1, k = 0, temp = 0;
    while (k < j)
    {
        temp = arr[k];
        arr[k] = arr[j];
        arr[j] = temp;
        k++;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     int arr[n];

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < n / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }

//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
