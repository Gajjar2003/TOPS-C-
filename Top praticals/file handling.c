// File handling program

#include<stdio.h>
char str[20];
  FILE   *pr;
  main()
  {
  
/*pr=fopen("test.txt","w");
fprintf(pr ,"%s","hello world");
fputs("hello world",pr);
fclose(pr);*/

pr=fopen("test.txt","r");
fscanf(pr,"%s",str)
printf("reading data from file =%s",str);
fclose(pr);

}
