// #include <stdio.h>
// int main()
// {
//     for( int i = 2 ; i <= 100 ; i++){
//         if( i%2 != 0 && i%3 !=0 && i%5 != 0){
//             printf("%d \n",i);
//         }
//     }
//     return 0 ;
// }

#include <stdio.h>

int main() {
    printf("Prime numbers between 1 and 100: ");

    for (int i = 2; i <= 100; i++) {
        int isPrime = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
