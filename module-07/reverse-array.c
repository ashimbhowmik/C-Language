#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // age array size (n) declear kore user theke nite hobe then

    int i, n;
    scanf("%d", &n);

    // scanf diye user theke niyar pore arry=[n] size set korte hobe
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("arr[%d]\n", arr[i]);
    }

    return 0;
}