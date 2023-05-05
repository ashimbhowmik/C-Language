#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[1001];
    scanf("%s", a);
    int count[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        int v = a[i] - 'a';
        count[v]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, count[i]);
    }

    return 0;
}