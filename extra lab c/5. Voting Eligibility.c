/*5. Voting Eligibility*/

#include<stdio.h>

main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("Your are eligibility for voting ");
	}
	else
	{
		printf("Your are not eligibility for voting");
	}
}
