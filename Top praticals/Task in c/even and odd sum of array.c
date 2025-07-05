// even and odd sum for array

	#include<stdio.h>

main()
{
	int arry[6]={2,11,14,13,84,75};
	int i;
	int evensum=0,oddsum=0;
	
	printf(" enter your even  number: ");


	
	for(i=0;i<6;i++)
	{
		if(arry[i] %2==0)
		{
			printf("%d ",arry[i]);
			evensum += arry[i];
			
		}
	
	}
	printf("\n sum of even number=%d",evensum);
	
	printf("\nEnter your odd number:");
	
	for(i=0;i<6;i++)
	{
		if(arry[i] %2!=0)
		{
			printf("%d ",arry[i]);
			oddsum += arry[i];
		}
	}
	printf("\n sum of odd number=%d",oddsum);
	
}
