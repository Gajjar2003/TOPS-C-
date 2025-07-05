//find a taks

#include<stdio.h>

main()
{
	int i,x1,x2,sum;
	for(i=1;i<=20;i++)
	{
		sum=x1+x2;
		printf("%d\n",sum);
		
		x1=x2;
		x2=sum;
	}
}
