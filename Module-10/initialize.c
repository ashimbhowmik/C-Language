#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[] = "Rahat";
    int sz = sizeof(a) / sizeof(char);
    printf("%d\n", sz);
    printf("%s", a);

    return 0;
}