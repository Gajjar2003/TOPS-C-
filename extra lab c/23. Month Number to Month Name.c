/*23. Month Number to Month Name*/

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
    		printf("Enter your is Month January");
    		break;
    			case 2:
    		printf("Enter your is Month February");
    		break;
    			case 3:
    		printf("Enter your is Month March");
    		break;
    			case 4:
    		printf("Enter your is Month April");
    		break;
    			case 5:
    		printf("Enter your is Month May");
    		break;
    			case 6:
    		printf("Enter your is Month June");
    		break;
    			case 7:
    		printf("Enter your is Month July");
    		break;
    			case 8:
    		printf("Enter your is Month August");
    		break;
    			case 9:
    		printf("Enter your is Month September");
    		break;
    			case 10:
    		printf("Enter your is Month October");
    		break;
    	     	case 11:
    		printf("Enter your is Month November");
    		break;
    		   case 12:
    		printf("Enter your is Month December");
    		break;
    		
    		default:
    			printf("Invalid choice ");
    		
    		
	}
}
