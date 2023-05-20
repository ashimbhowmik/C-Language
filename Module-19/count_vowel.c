#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(char *n, int i)
{
    if (n[i] == '\0')
    {
        return 0;
    }

    int ans = fun(n, i + 1);

    if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'A' || n[i] == 'E' || n[i] == 'I' || n[i] == 'O' || n[i] == 'U')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{

    char n[205];
    fgets(n, 205, stdin);
    int ans = fun(n, 0);
    printf("%d\n", ans);

    return 0;
}