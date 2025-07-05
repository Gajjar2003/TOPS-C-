//Write a C program that accepts 10 integers from the user and stores them in an array. Theprogram should then find and print the maximum and minimum values in the array.

#include<stdio.h>

main()
{
	int arry[10]={10,20,45,78,36,77,47,89,30,73};
	int i,n;
	
	
		printf("Please enter your number: ");
		scanf("%d",&n);
	
	for(i=0;i<=10;i++)
	{
	
		
		if(n > arry[i] )
		{
			printf("\nmaximum %d value is=%d",n,arry[i]);
		}
		else if(n < arry[i])
		{
			printf("\nminimum  %d value=%d",n,arry[i]);
		}
		else
		{
			printf("\nequal  %d value is=%d",n,arry[i]);
		}
	}

}
