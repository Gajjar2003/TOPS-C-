// 2d array example-2

#include<stdio.h>

main()
{
	int a[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter a [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n a[%d][%d]=%d",i,j,a[i][j]);
		}
	}
	
}
