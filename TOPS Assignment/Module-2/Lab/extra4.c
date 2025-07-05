//Check Number Properties take

//the number is a multiple of both 3 and 5.


#include<stdio.h>

main()
{
	int num;
	printf("Plesae Enter your number: ");
	scanf("%d",&num);
	
	(num %3==0 && num %5==0)?printf("This number is multiple of 3 and 5"):printf("This number is Not  multiple of 3 and 5");
	
}
