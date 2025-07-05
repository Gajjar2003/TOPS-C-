// Break and continue statement program

#include<stdio.h>

main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==7)
		{
			//break;
			continue;
		}
		
		printf("\ni=%d",i);
	}
}
