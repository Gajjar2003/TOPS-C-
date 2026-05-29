/*15. Triangle Validity by Angles*/

#include<stdio.h>

main()
{
	int a,b,c,sum;
	
	printf("Enter a and b and c value: ");
	scanf("%d %d %d", &a, &b, &c);

	
	sum=a+b+c;
	
	
	if(sum == 180)
	{
		printf("The triangle is valid.");  
	}
	else 
	{
		printf("The triangle is not valid.");
	}
}
