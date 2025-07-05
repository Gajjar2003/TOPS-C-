//Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.

#include<stdio.h>

main()
{
	int a,b;
	printf("Enter your program is arithmetic");
	printf("\n Please enter your first and second  number:" );
	scanf("%d %d",&a,&b);
	
	printf("\na+b=%d",a+b);
	printf("\na-b=%d",a-b);
	printf("\na*b=%d",a*b);
	printf("\na/b=%d",a/b);
	
	
	printf("\n\n Enter your program is relational");
	printf("\na==b=%d",a==b);
	printf("\na>b=%d",a>b);
	printf("\na>b=%d",a<b);
	printf("\na>=b=%d",a>=b);
	printf("\na<=b=%d",a<=b);
	printf("\na!=b=%d",a!=b);
	
	
	printf("\n\nEnter your program is logical");
	printf("\na&&b=%d",a&&b);
	printf("\na||b=%d",a||b);
	printf("\n!%d : %d\n", a, !a);
    printf("\n!%d : %d\n", b, !b);
		
	
	
}
