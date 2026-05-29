/*20. Grade to Description Mapping*/


#include<stdio.h>

main()
{
	char choice;
	
	printf("Press E is Excellent");
	printf("\nPress V is Very Good ");
	printf("\nPress G is  Good ");
	printf("\nPress A is Average ");
	printf("\nPress F is Fail ");
	
	printf("\nPlase enter your choice is: ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		    case 'E':
			printf("your are Excellent");
			break;
			
			case 'V':
			printf("your are Very Good");
			break;
			
			case 'G':
			printf("your are Good");
			break;
			
			case 'A':
			printf("your are Average");
			break;
			
			case 'F':
			printf("your are Fail");
			break;	
			
			default:
			printf("Enter your choice invalid");
	}
}


