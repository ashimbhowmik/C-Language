#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int x ,y,z;
    scanf("%d",&x);
 
        y = x%10;
        z = x/10;
        if( y%z == 0 || z%y == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    
      
    return 0;
}