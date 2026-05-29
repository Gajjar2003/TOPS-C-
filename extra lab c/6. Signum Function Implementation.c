/*6. Signum Function Implementation*/

#include <stdio.h>

int signum(int num) {
    if (num > 0)
        return 1;
    else if (num == 0)
        return 0;
    else
        return -1;
}

 main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = signum(number);

    printf("Signum of %d is %d\n", number, result);


}

