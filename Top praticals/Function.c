// Function program


#include<stdio.h>

void display();
void sum(int a , int b);


main()
{
	display();
	sum(3,5);
}

void display()
{
	printf("My name is jenil");
}


void sum(int a ,int b)
{
	int c=a+b;
	printf("\nTwo value sum of=%d",c);
}
