#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //   declear 2d array
    int a[4][3];

    // need size
    // row col

    // row er upor loop
    for (int i = 0; i < 4; i++)
    {

        // column er upor loop
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // print korar jonno
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("%d", a[3][2]);

    return 0;
}