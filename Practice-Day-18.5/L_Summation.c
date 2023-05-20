#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int sum(int A[], int n, int i)
{

    if (i == n)
        return 0;

    return A[i] + sum(A, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    long long int result = sum(A, n, 0);
    printf("%lld\n", result);

    return 0;
}
