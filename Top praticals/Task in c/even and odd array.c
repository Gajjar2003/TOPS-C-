// even and odd number for array

#include<stdio.h>

main()
{
	int arry[6]={2,11,14,13,84,75};
	int i;

	
	printf(" enter your even  number: ");


	
	for(i=0;i<6;i++)
	{
		if(arry[i] %2==0)
		{
			printf("%d ",arry[i]);
		}
	
	}
	
	printf("\nEnter your odd number:");
	
	for(i=0;i<6;i++)
	{
		if(arry[i] %2!=0)
		{
			printf("%d ",arry[i]);
		}
	}
	
}
