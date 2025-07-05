/*

   a
   bb
   ccc
   dddd
   eeeee
   ffffff
   
   */
   
   #include<stdio.h>
   main()
   {
   	 int i,j ;
	char count='a';
   	 
   	 for(i=1;i<=5;i++)
   	 {
   	 	for(j=1;j<=i;j++)
   	 	{
   	 		printf("%c",count);
   	 
			}
			printf("\n");
			++count;
		}
   }
