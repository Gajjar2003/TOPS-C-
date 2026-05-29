/* While developing a menu-driven console application, why are loops preferred over conditional repetition? Explain which loop you would choose and why?*/
#include <stdio.h>

int main() {

    int choice = 0;

    while(choice != 3) {

        printf("\n1. Start");
        printf("\n2. Help");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Program Started");
        }
        else if(choice == 2) {
            printf("Help Section");
        }
        else if(choice == 3) {
            printf("Program Closed");
        }
        else {
            printf("Invalid Choice");
        }
    }

    return 0;
}
