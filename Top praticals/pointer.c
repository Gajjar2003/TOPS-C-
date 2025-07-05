// pointer 


#include<stdio.h>

main()
{
	int a=10;
	int *je;
	
	je=&a;
	printf("\n address=%p \n value=%d",je,*je);
	
	*je=300;
	printf("\n a=%d",a);
	
}
