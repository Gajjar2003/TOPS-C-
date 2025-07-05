// unions structures

#include<stdio.h>

union Student
{
	int Roll;
	char name[20];
}

main()
{
	union Student s;
	printf("Enter Roll number and Name : ");
	scanf(" %d %s",s.Roll,s.name);
	printf("\n Roll=%d  \t Name=%s",s.Roll,s.name);
	
}
