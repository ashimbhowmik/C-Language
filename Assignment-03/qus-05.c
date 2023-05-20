#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char *a)
{

    char b[1001], c[1001];
    strcpy(c, a);
    int i;
    for (i = 0; i < strlen(a) / 2; i++)
    {
        int temp = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = temp;
    }

    for (i = 0; i < strlen(a); i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';

    if (strcmp(c, b) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i;
    char a[1001], b[1001], c[1001];
    scanf("%s", a);

    int check = is_palindrome(a);
    if (check == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}