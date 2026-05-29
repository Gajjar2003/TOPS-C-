/*18. Profit and Loss Calculation*/

#include<stdio.h>

main()
{
	int sell,cost;
	
	printf("Enter your sell:");
	scanf("%d",&sell);
	
	printf("Enter your cost: ");
	scanf("%d",&cost);
	
	
	if(sell  == cost)
	{
		printf("NO Profit and No Loss");
	}
	
	else if( sell > cost)
	{
		printf("you are profit");
	}
	else
	{
		printf("you are loss");
	}
}
