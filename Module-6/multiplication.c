#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int x, i , y  ;
    
    scanf("%d",&x);

    for( i = 1 ; i <= 12 ; i++){
        y = x * i;
        printf("%d * %d = %d\n",x,i,y);
    }
      
    return 0;
}