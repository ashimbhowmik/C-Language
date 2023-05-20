#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    // user input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // exect row
    // int row1;
    // scanf("%d", &row1);
    // if (row1 <= row)
    // {
    //     for (int i = 0; i < col; i++)
    //     {
    //         printf("%d ", a[row1][i]);
    //     }
    // }
    // else
    // {
    //     printf("Invaild row");
    // }

    // exect col
    int col1;
    scanf("%d", &col1);

    if (col1 <= col)
    {

        for (int i = 0; i < row; i++)
        {
            printf("%d\n", a[i][col1]);
        }
    }
    else
    {
        printf("Invaild col");
    }

    return 0;
}
