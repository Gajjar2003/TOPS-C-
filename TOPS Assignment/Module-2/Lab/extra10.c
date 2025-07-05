// prime number check

#include<stdio.h>

int main() {
    int i, n, flag = 0;

    printf("Enter your number is: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Not prime number");
        return 0;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Prime number = %d", n);
    } else {
        printf("Not prime number = %d", n);
    }

    return 0;
}

