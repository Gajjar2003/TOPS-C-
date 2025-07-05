// Find a convert celsius to fahrenheit

#include <stdio.h>

main()
{
	int celsius;
	float f;
	
	printf("Enter a celsius: ");
	scanf("%d",&celsius);
	
	f=(celsius*1.8)+32;
	printf("\nEnter a fahrenheit:%f",f);
}
