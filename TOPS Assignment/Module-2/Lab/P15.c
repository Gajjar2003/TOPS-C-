// Write a C program that defines a structure to store a student's details (name,roll number, and marks). Use an array of structures to store details of 3students and print them.


#include<stdio.h>

struct student
{
	int rollnumber,marks;
	char name[30];
	
	
	
}


main()
{
	struct student s1;
	struct student s2;
	struct student s3;
	
	printf("Please enter your studens information");
	printf("\n Enter your first student roll number, marks and student name: ");
	scanf("%d %d %s",&s1.rollnumber,&s1.marks,s1.name);
	printf("\n Enter your second student roll number, marks and student name: ");
	scanf("%d %d %s",&s2.rollnumber,&s2.marks,s2.name);
	printf("\n Enter your thd student roll number, marks and student name: ");
	scanf("%d %d %s",&s3.rollnumber,&s3.marks,s3.name);
	
	printf("\nrollnumber=%d makrs=%d and name=%s",s1.rollnumber,s1.marks,s1.name);
	printf("\nrollnumber=%d makrs=%d and name=%s",s2.rollnumber,s2.marks,s2.name);
	printf("\nrollnumber=%d makrs=%d and name=%s",s3.rollnumber,s3.marks,s3.name);
}
