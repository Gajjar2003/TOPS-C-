// sum fo array

#include<stdio.h>


main()
{
	int i, sum=0;
	int a[6]={45,78,95,35,44,26};
	
	for(i=0;i<6;i++)
	{
		printf("\n Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i-0;i<6;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	printf("\narray all sum elements=%d",sum);
}
