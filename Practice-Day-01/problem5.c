#include<stdio.h>
int main()
{
    int x ;
    scanf("%d",&x);
    
    if(x>=10000){
        printf("Gucci Bag\n");
        if(x>20000){
            printf("Gucci Belt");
        }
    }
    else if(x>=5000){
        printf("Levis Bag");
    }
    else{
        printf("Something");
    }
    return 0;
}