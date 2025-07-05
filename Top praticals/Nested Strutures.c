// Nested structures

#include<stdio.h>

struct Subject
{
	 char sname[20];
};

struct Student
{
	int Roll;
	char name[20];
	
	struct Subject sub1;
};


main()
{
	struct Student s1;
	
	printf("Please Enter your Roll number,Name and subject: ");
	scanf("%d %s %s",&s1.Roll,s1.name,s1.sub1.sname);
	
	printf("\n Your Enter Roll Number=%d",s1.Roll);
	printf("\n Your student name=%s",s1.name);
	printf("\n Your subject=%s",s1.sub1.sname);
}
