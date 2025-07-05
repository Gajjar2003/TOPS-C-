// straing example

#include<stdio.h>
main()
{
	char str[6]={'j','e','n','i','l','\0'}; // init value
	
	char str1[10]; // input value
	
	char str2[10]; // whit space
	
	
	printf(" straing is a = %s",str);
	
    // straing with space
    
	printf("\n Enter your straing:",str2);
	gets(str2);
	printf("\n Your straing is:");
	puts(str2);
	
		// input and out string 
	printf("\n Enter your straing: ");
	scanf("%s",str1);
	printf("\n Entre your straing is=%s",str1);
	
	
}
