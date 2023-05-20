#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char n[1005];
    fgets(n, 1005, stdin);
    int c = 0, s = 0, sp = 0;

    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] >= 'A' && n[i] <= 'Z')
        {
            c++;
        }
        if (n[i] >= 'a' && n[i] <= 'z')
        {
            s++;
        }
        if (n[i] == ' ')
        {
            sp++;
        }
    }
    printf("Capital - %d\n", c);
    printf("Small - %d\n", s);
    printf("Spaces - %d\n", sp);

    return 0;
}