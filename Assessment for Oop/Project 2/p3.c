/*Functions & Pointers Write a program to: 
? Swap two numbers using a user-defined function ? 
Implement swapping using pointers ? Explain why pass-by-reference is necessary here */

#include <stdio.h>

void swap(int *a, int *b) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping:");
    printf("\nNum1 = %d", num1);
    printf("\nNum2 = %d", num2);

    swap(&num1, &num2);

    printf("\n\nAfter Swapping:");
    printf("\nNum1 = %d", num1);
    printf("\nNum2 = %d", num2);

    return 0;
}
