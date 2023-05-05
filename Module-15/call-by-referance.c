#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *ptr)
{
    // x er value
    printf("x er value : %d\n", *ptr);

    // access of x er address / ptr(pointer) er value
    // address of x == ptr(pointer) value
    printf("x er address : %p\n", ptr);
    printf("ptr er value : %p\n", ptr);

    // ptr(pointer) er address
    printf("ptr er address : %p\n", &ptr);

    *ptr = 500;
}

int main()
{

    int x = 100;
    printf("x er value : %d\n", x);
    printf("x er address : %p\n", &x);

    fun(&x);

    printf("x er value :%d", x);

    return 0;
}