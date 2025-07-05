// straing not ues to funaction example

#include<stdio.h>

main()
{
	char str[20];
	int i=0;
	printf("Enter your straing: ");
	scanf("%s",str);
	printf("\nYour straing is=%s",str);
	
	while(str[i] != '\0')
	{
		i++;
	}
	printf("\n Straing length=%d",i);
}
