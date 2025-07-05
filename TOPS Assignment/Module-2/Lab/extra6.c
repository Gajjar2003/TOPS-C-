// Number Comparison

//The largest number and  The smallest number


#include<stdio.h>

main()
{
	int num1,num2;
	printf("The largest number and  The smallest number");
	printf("\nPlease Enter your two number");
	scanf("%d %d",&num1,&num2);
	
	if(num1 > num2)
	{
		printf("\nEnter this number is largest number=%d",num1);
		printf("\nEnter this number is smallest number=%d",num2);
	}
	else if (num2 > num1)
	{
			printf("\nEnter this number is largest number=%d",num2);
		    printf("\nEnter this number is smallest number=%d",num1);
	}
	else
	{
		printf("This number is equal");
	}
}
