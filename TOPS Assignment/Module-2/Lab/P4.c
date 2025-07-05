//Find a switch program

#include<stdio.h>

main()
{
	int num;
	printf("Enter your choice number(1-12):");
	scanf("%d",&num);
	
	switch(num)
	{
		case  1 :
			printf("\nEnter your choice is a January");
			break;
			
		case  2 :
			printf("\nEnter your choice is a February");
			break;
		
		case  3 :
			printf("\nEnter your choice is a March");
			break;
			
		case  4 :
			printf("\nEnter your choice is a April");
			break;
			
		case  5 :
			printf("\nEnter your choice is a May");
			break;
			
		case  6 :
			printf("\nEnter your choice is a June");
			break;
			
		case  7 :
			printf("\nEnter your choice is a July");
			break;
			
		case  8 :
			printf("\nEnter your choice is a August");
			break;
			
		case  9 :
			printf("\nEnter your choice is a September");
			break;
			
		case  10 :
			printf("\nEnter your choice is a October");
			break;	
			
		case  11 :
			printf("\nEnter your choice is a November");
			break;
			
		case  12 :
			printf("\nEnter your choice is a December");
			break;
			
		default :
			printf("\nEnter your choice is Error");
			
	}
}
