#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userchoice, computerchoice;
    char y;

    srand(time(0));

    printf("\n*******************************");
    printf("\n**                           **");
    printf("\n** WELL COME TO CRICKET GAME **");
    printf("\n**                           **");
    printf("\n*******************************");

    do
    {
        printf("\n\nTwo players game: user and computer");
        printf("\n\nPRESS 1 to select Bat");
        printf("\nPRESS 2 to select Ball");
        printf("\nPRESS 3 to select Stump");

        printf("\n\nPlease enter your choice (1-3): ");
        scanf("%d", &userchoice);

        computerchoice = (rand() % 3) + 1;

        printf("Now Computer choice is: ");
        switch (computerchoice)
        {
        case 1:
            printf("Bat\n");
            break;
        case 2:
            printf("Ball\n");
            break;
        case 3:
            printf("Stump\n");
            break;
        }

        if (userchoice < 1 || userchoice > 3)
        {
            printf("Please correct your choice?");
        }
        else if (userchoice == computerchoice)
        {
            printf("It's a Draw!\n");
        }
        else if ((userchoice == 1 && computerchoice == 2) ||
                 (userchoice == 2 && computerchoice == 3) ||
                 (userchoice == 3 && computerchoice == 1))
        {
            printf("You win this match!\n");
        }
        else
        {
            printf("You lose this match!\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &y);

    } while (y == 'y' || y == 'Y');

    printf("\nThank you for playing the cricket game!\n");

    
}

