#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int x ,i,y;
    scanf("%d",&x);
    int even=0,odd=0,pos=0,neg=0;

    for( i = 1 ; i<=x ; i++){
        scanf("%d",&y);
        // if(y%2 == 0 && y > 0){
        //     even++;
        //     pos++;
        // }
        // else if(y%2 == 0 && y < 0){
        //     even++;
        //     neg++;
        // }
        // else if(y%2 != 0 && y > 0){
        //     odd++;
        //     pos++;
        // }
        // else if(y%2 != 0 && y < 0){
        //     odd++;
        //     neg++;
        // }
        // else{
        //     even++;
        // }

        // even & odd

        if(y%2 == 0){
            even++;
        }
        else{
            odd++;
        }

        // postive & negative

        if(y > 0){
            pos++;
        }
        else if( y <0){
            neg++;
        }
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
      
    return 0;
}