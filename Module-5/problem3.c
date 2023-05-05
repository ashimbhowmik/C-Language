#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    char ch;
    int x;
    scanf(" %c",&ch);
    if(ch >= 'A' && ch <='Z'){
        x = ch + 32;
        printf("%c",x);
    }
    else{
        x = ch - 32 ;
        printf("%c",x);
    }
      
    return 0;
}