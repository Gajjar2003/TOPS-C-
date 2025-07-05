#include<stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	
	int userchoice,computerchoice;
	
    srand(time(0));

	printf("\n*******************************");
	printf("\n**                           **");
	printf("\n** WELL COME TO CRICKET GAME **");
	printf("\n**                           **");
	printf("\n*******************************");
	
    printf("\n\nTwo plyers game user and computer");
	printf("\n\nPRESS 1 select Bat");
	printf("\nPRESS 2 select Ball");
	printf("\nPRESS 3 select Stump");
	
	printf("\n\nPlease enter your choice is(1-3): ");
	scanf("%d",&userchoice);
	
	 computerchoice = (rand() % 3) + 1;
	 
	 printf("Now Computer choice is: ");
	 switch(computerchoice)
	 
	 {
	 	 case 1: printf("Bat\n"); break;
         case 2: printf("Ball\n"); break;
         case 3: printf("Stump\n"); break;
	 }
	 
	 if(userchoice == computerchoice )
	 {
	 	printf("It's a Draw!'");
	 }
	 else if((userchoice == 1 &&  computerchoice == 2) || 
	         (userchoice == 2 && computerchoice == 3 ) || 
			 (userchoice  == 3 && computerchoice == 1))
	 {
	 	printf("You are win this match");
	 }
	 
	 else if (userchoice >= 1 && userchoice <= 3)
	 {
	 	printf("You are lose this match");
	 }
	 
	 else
	 {
	 	printf("Please correct your choice?");
	 }
	
	
	
	
	
}
