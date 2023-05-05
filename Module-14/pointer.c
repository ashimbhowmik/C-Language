#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a = 10;
    printf("Address of a %p\n", &a);

    int *p = &a;
    printf("Address of a %p\n", p);

    // derefarance
    printf("Before a value - %d\n", *p);

    // p = 500;
    // ami jodi p=500 dei tahole upre p=x(address) chilo oita change 500 set hoiche x er man change hoy nai

    *p = 500;
    printf("After a value - %d", a);

    return 0;
}