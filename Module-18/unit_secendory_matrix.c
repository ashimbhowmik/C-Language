#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int row, col, flag = 1;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                if (a[0][0] != 1)
                {
                    flag = 0;
                }
            }

            else if (!(i == j))
            {
                if (a[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }
    if (!flag)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}