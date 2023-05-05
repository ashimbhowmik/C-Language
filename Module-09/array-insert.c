#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i, pos, x;
    scanf("%d", &n);

    // ekhane  arr[n + 1] use hoiche karon amar ekta position beshi lagbe

    int arr[n + 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &x);

    // 1 no postion a insert korte hole ager loop er value ke dan side a store korte hobe tai postion er sathe 1 + kora hooiche

    // arr[i] = arr[i - 1]; ekhane last er index arr[i] ekhane ager value payar jonno arr[i - 1] ayta kora hoiche

    for (i = n; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;

    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}