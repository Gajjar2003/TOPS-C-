// exaple for food bils system

#include<stdio.h>

main()
{
   printf("===================================");
   printf("\n*                                 *");
   printf("\n*       Food billing system       *");
   printf("\n*                                 *");
   printf("\n===================================");
   
   int choice,quantity;
   float total;
   char oder;
   
   
   printf("\nPLEASE ENTER YOUR FOOD BILNG SYSTEM IT");
   printf("\n\tNo \t\tMENU \t\tPRICE");
   printf("\n\t1 \t\tpizza \t\t180Rs");
   printf("\n\t2 \t\tBurger \t\t150Rs");
   printf("\n\t3 \t\tDose \t\t140Rs");
   printf("\n\t4 \t\tIdli \t\t80Rs");
   printf("\n\t5 \t\tCoffce \t\t280Rs");
   
   
   do
   {
   
   printf("\nPlease enetr your choice (1-5): ");
   scanf("%d",&choice);

   if(choice >=1  && choice <=6)
   {
   	  printf("Enter your quantity:");
   	  scanf("%d",&quantity);   
		 
		 
		 switch(choice)
		 {
		 	case 1:
		 		total += 180*quantity;
		 		printf("Enter your choice is pizaa=%.2f",total);
		 		break;
		 		
		 	case 2:
		 		total += 150*quantity;
		 		printf("Enter your choice is Burger=%.2f",total);
		 		break;
				 
			case 3:
		 		total += 140*quantity;
		 		printf("Enter your choice is Dose=%.2f",total);
		 		break;
				 
				 
			case 4:
		 		total += 80*quantity;
		 		printf("Enter your choice is Idli=%.2f",total);
		 		break;
				 
				 
			case 5:
		 		total += 280*quantity;
		 		printf("Enter your choice is coffec=%.2f",total);
		 		break;	 	 	 	
		 		
		 		
		 	default:
		 		printf("Enter your choice is not correct");
		 		break;
		 	}
		 	
		 }
		 	
		 	printf("\nYOU are confirm oder(Y/N):");
		 	scanf(" %c",&oder);
		 	
		 	printf("\n Your TOTAL Bils is =%.2f",total);
		 	
		}while(oder== 'Y'|| oder== 'y');
		
	}
		 
		 
   
 

   
  
   
   
   
   


