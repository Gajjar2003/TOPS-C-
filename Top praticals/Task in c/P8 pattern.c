/*
  a
  ab
  abc
  abcd
  abcde
  
  */
  
#include<stdio.h>

main()
{
	int i,j,count='a';
	
	for(i='a';i<='f';i++)
	{
		for(j='a';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	
	}
  }  
