// Go to statement program

#include<stdio.h>

main()
{
	int num;
	printf("\nEnter your number: ");
	scanf("%d",&num);
	
	if(num %2==0)
	{
		goto even;
	}
	else
     {
     	goto odd;
	 }
	 
	 even:
	 	{
	 		printf("Enter This number is even");
		 }
		 
		odd:
		
		{
			printf("Enter this number is odd");
		 } 
	
}
