#include<stdio.h>
int main()
{
    int a, b ,num1,num2,num3 ;
    double num4;

    scanf("%d %d",&a,&b);

    num1 = a+b ; 
    num2 = a-b ; 
    num3 = a*b ; 
    num4 = a*1.0 /b ; 

    printf("%d + %d = %d \n",a,b, num1);
    printf("%d - %d = %d \n",a,b, num2);
    printf("%d * %d = %d \n",a,b, num3);
    printf("%d / %d = %0.2f",a,b, num4);

    return 0;
}