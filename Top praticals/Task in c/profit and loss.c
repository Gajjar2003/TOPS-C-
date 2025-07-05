//find a peofit and loss

#include<stdio.h>

main()
{
	int sell,cost,profitloss;
	
	
	printf("\nEnter your cost value: ");
	scanf("%d",&cost);
	
	printf("Enter your sell value: ");
	scanf("%d",&sell);
	
	
	if(sell > cost)
	{
		profitloss=sell-cost;
		printf("You are profit",profitloss);
	}
	else if( sell < cost)
	{
		profitloss=cost-sell;
	    printf("You are loss",profitloss);
		
	}
	else
	{
		printf("You are not profit and loss");
	}
}
