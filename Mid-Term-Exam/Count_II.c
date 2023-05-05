#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char s[1001];
    int i, v = 0;
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            v++;
        }
    }
    printf("%d", v);

    return 0;
}