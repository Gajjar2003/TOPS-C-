// Control Statements

//Grade Calculator

#include<stdio.h>

main()
{
	int marks;
	printf("Check for student marks");
	printf("\nPlesae Enter your marks:");
	scanf("%d",&marks);
	
	if(marks > 90)
	{
		printf("Student For A grade");
	}
	else if(marks >75 && marks <= 90)
	{
	    printf("Student For B grade");
	}
	else if (marks > 50 && marks <= 75)
	{
	    printf("Student For c grade");
	}
	else if (marks > 50)
	{
		printf("Student For D grade");
	}
	else
	{
		printf("Your are fail");
	}
	
}
