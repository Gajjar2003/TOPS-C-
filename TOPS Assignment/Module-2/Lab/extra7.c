// prime number exrta 

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  
    } else {
        
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;  
               
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

   
}

