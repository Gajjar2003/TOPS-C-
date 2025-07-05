//Find a if and else conditon admission taks

#include<stdio.h>

int main()
{
    int sci, maths, chem, total;
    float percentage;

    printf("Enter sci marks: ");
    scanf("%d", &sci);

    printf("Enter maths marks: ");
    scanf("%d", &maths);

    printf("Enter chem marks: ");
    scanf("%d", &chem);

    total = sci + maths + chem;
    printf("\nYour total marks = %d", total);

    percentage = ((float)total / 300) * 100; 
    printf("\nPercentage = %.2f%%\n", percentage);

  
  if(percentage > 80)
  {
  	printf("Your Div1");
  }
  else if(percentage > 70 && percentage < 80)
  {
  	printf("Your Div2");
  }
  else if(percentage > 60 && percentage < 70)
  {
  		printf("Your Div3");
  }
  else if(percentage > 50 && percentage < 60)
  {
  	printf("your div4");
  }
  
  else{
  	printf("Your are fail");
  }
}

