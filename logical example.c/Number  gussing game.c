//  Number Guessing Game

#include<stdio.h>

int main()
{
    printf("\n\t*********************************");
    printf("\n\t*                               *");
    printf("\n\t*Enter Your Number Guessing Game*");
    printf("\n\t*                               *");
    printf("\n\t*********************************");
    
    int num, attempts = 7;
    
    printf("\n\n\tI have selected a number between 1 and 10.");
    printf("\n\n\tYou have %d attempts to guess the number.\n", attempts);
    
    printf("\n\n\tPlease enter your number: "); 
    scanf("%d", &num);
    
    while(num != 10 && attempts > 1)
    {
        if(num > 10 || num < 1)
        {
            printf("\n\n\tPlease choose a number between 1 and 100.");
        }
        else
        {
            printf("\n\n\tWrong number.");
            attempts--;  
            printf("\n\n\tAttempts left: %d", attempts);
        }
        
        printf("\n\n\tPlease try again: ");
        scanf("%d", &num);
    }
    
    if(num == 10)
    {
        printf("\n\n\tYOU ARE WINNER FOR NUMBER GUESSING GAME\n");
    }
    else
    {
        printf("\n\n\tSorry! Uesr You Are all attempts to used. You Are loss For game is correct number was 10.\n");
    }
    
   
}

      
     
















