#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i, j, temp = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int p = n / 2;
    int q = (n / 2) + 1;
    if (n % 2 == 0)
    {
        printf("%d %d", arr[p - 1], arr[q - 1]);
    }
    else
    {
        printf("%d", arr[p]);
    }

    return 0;
}