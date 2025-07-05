// Write a C program that stores 5 integers in a one-dimensional array and prints them

#include<stdio.h>

main()
{
	int arry[5];
	int i;
	
	printf("Please enter your 5 number printing");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter your number%d:",i+1);
		scanf("%d",&arry[i]);
	}
	
	printf("\n This number your enter");
	for(i=0;i<5;i++)
	{
		printf("\n%d",arry[i]);
	}
	
	printf("\n");
}
