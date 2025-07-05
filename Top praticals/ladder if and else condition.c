// Find A ladder if and else condition

#include<stdio.h>

main()
{
	int x1,x2;
	
	printf("Enter a two value: ");
	scanf("%d %d",&x1,&x2);
	
	if(x1 > 0 && x2 > 0)
	{
		
		printf("This value is first");
	}
   else if(x1 < 0 && x2 > 0)
	{
		printf("This value is second");
	}
	
   else if (x1 < 0 && x2 < 0)
	{
		printf("This value is third");
	}
	
	else if(x1 > 0 && x2 < 0)
	{
		printf("This value fourth");
	
	}
	
	else 
	{
		printf("Error");
	}

}
