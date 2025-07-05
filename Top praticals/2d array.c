// 2d array example 

#include<stdio.h>

main()
{
	int a[2][2]={12,45,78,36};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" \n a[%d][%d]=%d",i,j,a[i][j]);
		}
		
		printf("\n");
	}
}
