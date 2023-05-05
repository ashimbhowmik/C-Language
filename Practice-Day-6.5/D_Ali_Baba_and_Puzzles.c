#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      
    long long int a,b,c,d ,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);


    n2 = a+b-c ;
    n3 = a+b*c ;
    n4 = a-b+c ;
    n5 = a-b*c ;
    n6 = a*b+c ;
    n7 = a*b-c ;

    


    if(  n2 == d || n3 == d || n4 == d || n5 == d || n6 ==  d || n7 == d ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
      
    return 0;
}