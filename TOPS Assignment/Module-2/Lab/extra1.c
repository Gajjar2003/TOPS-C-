//Simple Calculator extra take

#include<stdio.h>

main()
{
	int num1,num2,ans;
	printf("Please Enter first your number: ");
	scanf("%d",&num1);
	printf("\nNow this second number:");
	scanf("%d",&num2);
	
	ans=num1+num2;
	printf("\nThis and is add=%d",ans);
		
	ans=num1-num2;
	printf("\nThis and is sub=%d",ans);
	
		
	ans=num1*num2;
	printf("\nThis and is mul=%d",ans);
	
		
	ans=num1/num2;
	printf("\nThis and is div=%d",ans);
	
}
