/*21. Day Number to Day Name*/


#include<stdio.h>

main()
{
	int num;
	
	printf("Press 1 is Monday");
	printf("\nPress 2 is Tuesday ");
	printf("\nPress 3 is Wednesday ");
	printf("\nPress 4 is Thursday ");
	printf("\nPress 5 is Friday ");
	printf("\nPress 6 is Saturday ");
	printf("\nPress 7 is Sunday ");
	
	printf("\nPlease enter your choice is (1-7): ");
	scanf("%d",&num);
	
	switch(num)
	{
			     case 1:
			printf("Enter your day is Monday ");
			break;
			
				case 2:
			printf("Enter your day is Tuesday ");
			break;
				case 3:
			printf("Enter your day is Wednesday ");
			break;
				case 4:
			printf("Enter your day is Thursday ");
			break;
				case 5:
			printf("Enter your day is Friday ");
			break;
				case 6:
			printf("Enter your day is Saturday ");
			break;
				case 7:
			printf("Enter your day is Sunday ");
			break;
			
			default:
				printf("Please enter your correct choice ");
			
	}
	
}
