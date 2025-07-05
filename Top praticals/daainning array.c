//find a dssinnding array

#include<stdio.h>

main()
{
	int a[6]={45,78,36,78,125,23};
	int i,j,temp;
	for(i=0;i<6;i++)
	{
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i] < a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}
