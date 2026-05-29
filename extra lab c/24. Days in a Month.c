/*24. Days in a Month*/


#include<stdio.h>

main()
{
	int num;
	
	printf("\nPress 1  is January");
	printf("\nPress 2  is February");
	printf("\nPress 3  is March");
	printf("\nPress 4  is April");
    printf("\nPress 5  is May");	
	printf("\nPress 6  is June");
	printf("\nPress 7  is July");
	printf("\nPress 8  is August");
    printf("\nPress 9  is September");
    printf("\nPress 10  is October");
    printf("\nPress 11  is November");
    printf("\nPress 12  is December");
    
    printf("\nPlease enter your choice is (1-12): ");
    scanf("%d",&num);
    
    switch(num)
    {
      case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("Month have 31 days. \n");  
	       break;
	case 2:
	       printf("The 2nd month is a February and have 28 days. \n");  
	       printf("in leap year The February month  Have 29 days.\n");  
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("Month have 30 days. \n");  
	       break;
	default:
	       printf("Invalid Month number.");  
	       break;
      }
    		
    		
	}


