#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);

    int v = strcmp(a, b);

    // -1 || V < 0 means a choto b boro
    // 0  means a = b
    // 1 || V > 0 means a boro b choto
    // printf("%d", v);

    if (v < 0)
    {
        printf("A choto\n");
    }
    else if (v > 0)
    {
        printf("B choto\n");
    }
    else
    {
        printf("Same\n");
    }

    // int i = 0;

    // while ((1))
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same\n");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A choto\n");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B choto\n");
    //         break;
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A choto\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("B choto\n");
    //         break;
    //     }
    // }

    return 0;
}