// straing funaction
#include<stdio.h>
#include<string.h>

main()
{
	char s1[20],s2[20];
	printf("Enter your first straing: ");
	scanf("%s",s1);
	printf("\nNow second straing: ");
	scanf("%s",s2);
	
	printf("\n String length=%d",strlen(s1));
	printf("\n s1==s2=%d",strcmp(s1,s2));
	printf("\n uppwercase=%s",strupr(s1));
    printf("\n reverse=%s",strrev(s1));
		
}


