#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    char x;
    int y;
    scanf(" %c",&x);
    if(x >='a' && x < 'z'){
        y = x + 1;
        printf("%c\n",y);
    }
    else if(x == 'z'){
        y = x - 25 ;
        printf("%c\n",y);
    }
      
    return 0;
}