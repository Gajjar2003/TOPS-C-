// static  variable 

#include<stdio.h>
void incerss()
{
	int a=0;
	static int s=0;
	a++;
	s++;
	printf("\n a=%d and s=%d",a,s);
}

main()
{
	int i;
	for(i=0;i<5;i++)
	{
		incerss();
	}
}
