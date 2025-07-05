//find a postive and negative number


#include<stdio.h>

main()
{
	int num;
	printf("Enter the value:");
	scanf("%d",&num);
	
	if(num >  0)
	{
		printf("Enter a postive number");
	}
	
	else if( num < 0)
	{
		printf("Enter a negative number");
	}
}
