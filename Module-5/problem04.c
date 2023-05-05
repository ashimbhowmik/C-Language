#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int X,Y ;
    scanf("%d",&X);
    Y = X / 1000 ;
    if(Y%2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }

    
      
    return 0;
}