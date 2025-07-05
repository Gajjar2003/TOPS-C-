// call by value 2


#include<stdio.h>

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("\n a=%d and b=%d",a,b);
}

main()
{
	int a=20 , b=300;
	swap(&a,&b);
	printf("\n a=%d and b=%d",a,b);
}
