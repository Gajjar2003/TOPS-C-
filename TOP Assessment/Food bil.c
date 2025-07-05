 //C Programming Assessment Test

#include<stdio.h>

main()
{
	int choice,quantity;
	float total;
	char oder;
	
      printf("\n***********************************************");
      printf("\n*                                             *");
      printf("\n*          WELL COME TO FOOD MENU             *");
      printf("\n*                                             *");
      printf("\n***********************************************");
      
      printf("\n\n\tCode\tITEM\t\tPRICE\n");
      printf("\n\t 1 \tPizza\t\tRS=100");
      printf("\n\t 2 \tBurger\t\tRS=80");
      printf("\n\t 3 \tPasta\t\tRS=110");
      printf("\n\t 4 \tSandwich\tRS=150");
      printf("\n\t 5 \tTea\t\tRS=20");
      printf("\n\t 6 \tCoffee\t\tRS=200");
      
     

	 do{
	 
	  printf("\n\n  Please Enter Your Choice: ");
      scanf("%d",&choice);
      
  
      
      if(choice >=1  && choice<=6)
      {
      	printf("\n   Enter a quantity: ");
      	scanf("%d",&quantity);
	  
      
      
      switch(choice)
      
	  {
	  	
      	case 1:
      		total += 100 * quantity;
      		printf("\n  Enter Your Choice Pizza:%d ", 100 * quantity);
      		break;
      		
      		case 2:
      		total += 80 *quantity;
      		printf("  Enter Your Choice Burger:%d", 80 * quantity);
      		break;
      		
      		case 3:
      		total += 110 * quantity;	
      		printf("  Enter Your Choice Pasta:%d ", 100 * quantity);
      		break;
      		
      		case 4:
      		total += 150 * quantity;	
      		printf("  Enter Your Choice sandwich:%d ",150 * quantity);
      		break;
      		
      		case 5:
      		total += 20 * quantity;	
      		printf("  Enter Your Choice Tea:%d ",20 * quantity);
      		break;
      		
      		case 6:
      		total += 200 * quantity;	
      		printf("  Enter Your Choice Coffee:%d ",200 * quantity);
      		break;
      		
      		default:
      			printf("  Enter Your choice is In-correct");
	  }
}
        else
            {
	            printf(" Invalid code. Please enter a valid item code.\n");
             }
	
	
              printf("\n\n Enter This Oder Your Are Confrim it( Y / N): ");
            	scanf(" %c",&oder);
            	
      printf("\n***********************************************");
      printf("\n*   Your Final Bil Rs=%.2f                  *",total);
      printf("\n*   Thank you for ordering with us            *");
      printf("\n*                                             *");
      printf("\n***********************************************");
            	
            }	while(oder=='y'|| oder=='Y');
            	
      
      	
	
	
}
