#include <stdio.h>


int factorial(int n);

int main() {
    int num, result;

 
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf(" Enter your Factorial numbers.\n");
    } else {
        
        result = factorial(num);
       
        printf("Factorial of %d is %d\n", num, result);
    }


}


int factorial(int n) {
    int fact = 1;
    int i;

   
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

