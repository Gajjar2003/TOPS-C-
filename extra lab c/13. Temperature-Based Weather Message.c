/*13. Temperature-Based Weather Message*/

#include<stdio.h>

main()
{
	int temp;
	printf("Enter your Temperature: ");
	scanf("%d", &temp);
	
	if(temp < 0)
	{
		printf("Temperature is Freezing weather");
		
	}
	else if(temp  > 0  && temp < 10)
	{
		printf("Temperature is Very Cold weather ");
	}
	
	else if( temp > 10 && temp  < 20)
	{
		printf("Temperature is Cold weather ");
	}
	else if(temp > 20 && temp < 30)
	
	{
		printf("Temperature is  Normal in Temp ");
	}
	else if(temp > 30 && temp < 40)
	{
		printf("Temperature is hot ");
	}
	
	else if(temp >= 40)
	{
		printf("Temperature is Very hot ");
	}
	
	else
	{
			printf("Temperature is Veay Very hot ");
	}
}
