/*7. Height Categorization*/

#include<stdio.h>

main()
{
	float height;
	
	 printf("Enter your height in : ");
     scanf("%f", &height);
     
    if (height < 100) 
	{
        printf("You are Short.\n");
    } else if (height >= 100 && height <= 150) 
	{
        printf("You are Average height.\n");
    } else 
	{
        printf("You are Tall.\n");
    }
}
