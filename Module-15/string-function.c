#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(char *arr)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c", arr[i]);
    }
}

int main()
{

    char arr[1000] = "Hello";
    fun(arr);

    return 0;
}