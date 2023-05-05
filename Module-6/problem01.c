
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int x , i;
    scanf("%d",&x);
    
    if( x == 1){
        printf("-1\n");
    }
    else{
        for( i =1 ; i <= x ; i++){
           if(i%2 == 0){
             printf("%d\n",i);
           }
        }
    }
    
      
    return 0;
}