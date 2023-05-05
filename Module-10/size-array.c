#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int a[20];
    char b[5];
    int size1 = sizeof(a) / sizeof(int);
    int size2 = sizeof(b) / sizeof(char);
    printf("%d\n", size1);
    printf("%d\n", size2);

    return 0;
}