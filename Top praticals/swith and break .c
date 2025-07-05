//Find a swith and break 

#include <stdio.h>

main()
{
	int num1,num2;
	char choise;
	
	printf("\n Press this key +");
	printf("\n Press this key -");
	printf("\n Press this key *");
	printf("\n Press this key /");
	
	printf("\n Enter Your choise: ");
	scanf("%c",&choise);
	
	printf("Enter This two value: ");
	scanf("%d %d",&num1,&num2);
	
	switch(choise)
	{
		case '+':
		printf("Add is=%d",num1+num2);
		break;
		
		case '-':
		printf("sub is=%d",num1-num2);
		break;	
		
		case '*':
		printf("mul is=%d",num1*num2);
		break;	
		
		
		case '/':
		printf("div is=%d",num1/num2);
		break;	
	
	
	default:
		{
			printf("Error this value");
		}
}

}
