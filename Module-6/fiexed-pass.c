#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    int i ,y;

    // for(i=1 ;  i !=EOF ; i++){
    //     scanf("%d",&y);
    //     if(y != 1999){
    //         printf("Wrong\n");
    //     }
    //     else{
    //         printf("Correct\n");
    //         break;
    //     }
    // }

    while (scanf("%d",&y) != EOF)
    {
        if(y != 1999){
            printf("Wrong\n");
        }
        else{
            printf("Correct\n");
            break;
        }
    }
    
      
    return 0;
}