#include <stdio.h>

int main()
{
    int num1, num2, min, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

 
 
      min = (num1 < num2) ? num1 : num2;
     max = (num1 > num2) ? num1 : num2;
     
     printf("Enter the number is a min:%d",min);
     printf("\nEnter the number is max:%d",max);
	

  

   
}

