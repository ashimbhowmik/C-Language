#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(char arr[], int i)
{

    if (arr[i] == '\0')
        return 0;

    int l = fun(arr, i + 1);
    return l + 1;
}

int main()
{

    char arr[5] = "hello";

    int length = fun(arr, 0);
    printf("%d", length);

    return 0;
}