//Extend this to handle a two-dimensional array (3x3 matrix) and  calculate the sum of all elements.


#include<stdio.h>

main()
{
	int max[3][3];
	int sum=0;
	int i,j;
	
	printf("Matrix calculate the sum of all elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter number [%d] [%d]",i,j);
			scanf("%d",&max[i][j]);
			
			sum += max[i][j];
		}
	}
	
	
	printf("\n(3 x 3 ) matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",max[i][j]);
		}
		
		printf(" \n");
	}
	
	printf("sum of all elements=%d",sum);
}
