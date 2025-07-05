// scope variable 

#include<stdio.h>

int y=500;  // global variable

void swap(int a, int b) // formal variable 
{
	int temp=a;
	a=b;
	b=temp;
	printf("\n a=%d and b=%d",a,b);
}

main()
{
	int a=150; // local variable 
	printf("a=%d",a);
	printf("\ny=%d",y);
}
