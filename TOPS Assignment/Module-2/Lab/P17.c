// Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.


#include<stdio.h>

char str[20];
  FILE   *pr;
  main()
  {
  
pr=fopen("test.txt","w");
fprintf(pr ,"%s","hello world");
fputs("hello world",pr);
fclose(pr);

pr=fopen("test.txt","r");
fscanf(pr,"%s",str)
printf("reading data from file =%s",str);
fclose(pr);

 
 
}
