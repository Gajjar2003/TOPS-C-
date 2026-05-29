/*4. Leap Year Determination*/

#include<stdio.h>

main()
{
	int year;
	
	
	printf("Enter your year: ");
	scanf("%d",&year);
	
	if(year %4==0)
	{
		printf("Enter your year is leep year");
	}
	else
	{
		printf("Enter your year is not leep year");
	}
}
