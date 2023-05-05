#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);

    int work = m1 * d;
    int days = work / m2;

    // float work = m1 * d;
    // float days = work / m2;

    printf("%d", days);

    return 0;
}
