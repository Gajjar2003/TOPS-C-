// file handling example

#include<stdio.h>

  char name[20];
  char email[20];
  int roll;
  int i;
  char ch;
  
  main()
  {
  
  
   FILE *su;
   
   su = fopen("student.cvs","a");
   fprintf(su,"roll,name,email\n");
   
   for(i=0;i<3;i++)
   {
   	printf("Please Enter your Roll number,Name,and email: ");
   	scanf("%d %s %s",&roll,name,email);
   	fprintf(su,"%d %s %s",roll,name,email);
   }
   
   fclose(su);
   
  su = fopen("student.cvs","r");
  while((ch=getc(su)) != EOF)
  
  {
    if (ch == ',')
            printf("\t");
        else
            printf("%c", ch);
  }
   
   fclose(su);
}
