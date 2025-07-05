//find a prime number

#include<stdio.h> 

main()
{
	int num,rem,rev;
	printf("Enter your number:");
	scanf("%d",&num);
	
	while( num != 0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	printf("rev num=%d",rev);
	
}
