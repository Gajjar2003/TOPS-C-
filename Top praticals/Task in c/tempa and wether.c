/// find a temp and wether if else


#include<stdio.h>

main()
{  

      int temp;
      
      printf("Enter temp value:  ");
      scanf("%d",&temp);
      
      if(temp <= 0)
      {
      	printf("Wether is Freezing");
      	
	  }
	   else if (temp > 0 && temp <= 10)
	  {
	  	printf("Wehter is very cold");
	  }
	  
	  else if(temp > 10 &&  temp <= 20)
	  {
	  	printf("Wehter is  cold");
	  }
	  
	  else if(temp > 20 &&  temp <= 30)
	  {
	  	printf("Wehter is  Normal");
	  }
	  else if(temp > 30 &&  temp <= 40)
	  {
	  	printf("Wehter is  Hot");
	  }
	  
	 else if(temp >  40)
	 {
	 	printf("Wehter is very Hot");
	 }
	 
 
	 
} 
