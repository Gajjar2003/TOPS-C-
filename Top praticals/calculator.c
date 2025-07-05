//Simple calculator


#include<stdio.h>
main()
{
	
	int num1,num2,sum;
	float floaing;
	
	printf("Enter a first number: ");
	scanf("%d",&num1);
    printf("Enter a second number: ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	printf("\nsum=%d",sum);
		
	sum=num1-num2;
	printf("\nsum=%d",sum);
	
		
	sum=num1*num2;
	printf("\nsum=%d",sum);
	
	floaing=num1/num2;
	printf("\nfloaing=%f",floaing);

}
