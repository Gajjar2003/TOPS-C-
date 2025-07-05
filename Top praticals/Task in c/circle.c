// Find To area of circle

#include <stdio.h>

main()
{
	int radius;
	float pi=3.14, area;
	
	printf("Enter a circle of radius: ");
	scanf("%d",& radius);
	
	
	area=pi*radius*radius;
	printf("%f", area);

}
