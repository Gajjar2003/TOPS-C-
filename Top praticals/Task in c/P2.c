// find a taks

#include<stdio.h>

main()
{
	int start,end,i,choice;
	
	printf("\nPress 1 For a Forward Number");
	printf("\nPress 2 For a Reverse Numbre");
	printf("\nEnter your start value:");
	scanf("%d",&start);
	printf("\nEnter your end value:");
	scanf("%d",&end);
	printf("\nEnter Your choice number: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		for(i=start;i<=end;i++)
		{
			printf("\n i=%d",i);
		}	
		
		break;
		
		case 2:
		for(i=end;i>=start;i--)
		{
			printf("\n i=%d",i);
		}	
		
		break;
		
		default:
			{
			printf("This value is Not correct.");
	    	}
	}
}
