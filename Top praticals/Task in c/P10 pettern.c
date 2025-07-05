/*

  a
  bc
  defg
  hijkl
  
  */
  
  
#include<stdio.h>

main()
{
    int i,j,k='a';
	
	for(i ='a'; i<='d'; i++)
	{
		for(j='a'; j<=i; j++)
		{
			printf("%c",k);
			k++;
		}
		
		printf("\n");
	}
  }  
