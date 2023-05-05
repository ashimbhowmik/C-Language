#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int arr[5], i, j;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        // printf("arr[%d]\n", arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]\n", arr[i]);
    }

    return 0;
}