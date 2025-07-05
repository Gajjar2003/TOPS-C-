//Write a C program that takes a number as input and checks whether it is a palindrome using a function


#include<stdio.h>

int Palindrome(int num) {
    int reversed = 0, remainder, original;
    
    original = num;
    
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    
    if(original == reversed)
        return 1;  
    else
        return 0;  
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(Palindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    
    return 0;
}

