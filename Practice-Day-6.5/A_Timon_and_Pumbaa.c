#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int a , b;
    scanf("%d %d", &a, &b);

    if ( a - b >= 0){
        printf("%d",a-b);
    }
    else{
        printf("0");
    }
      
    return 0;
}