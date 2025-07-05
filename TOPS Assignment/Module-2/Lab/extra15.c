//Write a C program that calculates the factorial of a given number using a function.

#include<stdio.h>


int fact(int n) {
    int sum = 1;  
    int i;

    for(i = 1; i <= n; i++) {
        sum = sum * i; 
    }

    return sum;  
}

int main() {
    int num, result;

    printf("Please enter your number: ");
    scanf("%d", &num);

    result = fact(num);  

    printf("The factorial of %d is = %d\n", num, result);

    return 0;
}

