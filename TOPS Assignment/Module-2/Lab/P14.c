// Write a C program that takes two strings from the user and concatenates theusing strcat(). Display the concatenated string and its length using strlen()


#include<stdio.h>
#include<string.h>

main()
{
	 char s1[10], s2[10];
	 
	 printf("Enter your first string: ");
	 scanf("%s",s1);
	 printf("\n Now second string:");
	 scanf("%s",s2);
	 
	 strcat(s1,s2);
	 printf("\n This value is=%s",s1);
	 printf("\nlenght is %d",strlen(s1));
	
}
