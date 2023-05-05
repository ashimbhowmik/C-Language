#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int x,t ;
    scanf("%d",&x);
    for( t=1 ; t<=x ; x++){
        int n;
        scanf("%d",&n);
        do
        {
            printf("%d ",n%10);
            n=n/10;
        } 
        while(n!=0);
        printf("\n");
        
        
    }    
      
    return 0;
}