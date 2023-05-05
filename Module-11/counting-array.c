#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i;
    scanf("%d", &n);
    int arr[n], count[10] = {0};
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (i = 0; i < n; i++)
    // {
    //     count[arr[i]]++;
    // }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 9)
        {
            count[9]++;
        }
    }
    // nicher ta hocche kei koyta sonkha input nichi sei porjonto loop chalabo
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d - %d\n", i, count[i]);
    // }

    printf("%d - %d\n", i, count[9]);

    return 0;
}