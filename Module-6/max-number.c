#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
      
    int x, i , y ;
    int z=INT_MAX ; // for min value
    int a = INT_MIN ; // for max value

    scanf("%d",&x);

    for(i=1 ; i <= x ; i++){
        scanf("%d",&y);
        if(z > y){
            z = y;
        }
    }
    printf("%d\n",z);
    
      
    return 0;
}