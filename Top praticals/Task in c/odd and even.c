// Find a odd and Even number 

#include<stdio.h>

main()
{
	int number;
	printf("\nEnter a number of value: ");
	scanf("%d",&number);
	
	(number %2==0)?printf("\nThe number is odd"):printf("\nThe number is even");
	
}
