// factorial take for funaction

#include<stdio.h>

int fact(int n);

int main()
{
	int number,result;
	
	printf("Enter your number: ");
	scanf("%d",&number);
	
	if(number < 0)
	{
		printf("\n Enter your number is not factorial");
	}
	else
	{
		result=fact(number);
		printf("This is Factorial number=%d",result,number);
	}
}

int fact(int n)
{
	int i;
	int fact=1;
	for(  i=1;i<=n;i++)
	{
		fact *= i;
	}
	return fact;
}
