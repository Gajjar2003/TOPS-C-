//Write a C program that takes N numbers from the user and stores them in an array. Theprogram should then calculate and display the sum of all array elements.

#include<stdio.h>

main()
{
	int arry[10];
	int i,n,sum=0;
	
	printf(" Please Enter your number is:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter your value %d:",i+1);
		scanf("%d",&arry[i]);
		sum=sum+arry[i];
	}
	
	printf("sum of element=%d",sum);
	
}
