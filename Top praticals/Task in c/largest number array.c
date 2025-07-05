// largest number for array

#include<stdio.h>

main()
{
	int arry[6];
	int i,num;
	
	printf("Enter your number:");
	
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&arry[i]);
	}
	
	
	for(i=0;i<6;i++)
	{
		if(arry[i] > num)
		{
			num = arry[i];
		}
	}
	
	printf("\n This largest number=%d",num);
}
