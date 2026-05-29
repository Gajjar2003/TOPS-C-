/*26. Simple Calculation Menu*/

#include <stdio.h>  

 main() {
  int num1,num2,sum;  

 
 
  printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.");
  
   printf("\nEnter your option:-");
   scanf("%d",&sum); 
  
   printf("Enter the first Integer :");
  scanf("%d",&num1);
  printf("Enter the second Integer :");
  scanf("%d",&num2);

  
 
  
  

  switch(sum) {  
    case 1:
      printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);  
      break;

    case 2:
      printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);  
      break;

    case 3:
      printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2); 
      break;  

    case 4:
      if(num2==0) {
        printf("The second integer is zero. Divide by zero.\n");  
      } else {
        printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);  
      }  
      break;

   

    default:
      printf("Input correct option\n");  
      break; 
  }
}
