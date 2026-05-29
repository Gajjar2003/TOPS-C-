/*22. Digit to Word Conversion*/

#include<stdio.h>

main()
{
	int num;
	
	printf("\nPress 1  is One");
	printf("\nPress 2  is Two");
	printf("\nPress 3  is Three");
	printf("\nPress 4  is Four");
    printf("\nPress 5  is Five");	
	printf("\nPress 6  is Six");
	printf("\nPress 7  is Seven");
	printf("\nPress 8  is Eight");
    printf("\nPress 9  is Nine");
    printf("\nPress 10  is Ten");
    
    printf("\nPlease enter your choice is (1-10): ");
    scanf("%d",&num);
    
    switch(num)
    {
    	case 1:
    		printf("Enter your is One");
    		break;
    			case 2:
    		printf("Enter your is Two");
    		break;
    			case 3:
    		printf("Enter your is Three");
    		break;
    			case 4:
    		printf("Enter your is Four");
    		break;
    			case 5:
    		printf("Enter your is Five");
    		break;
    			case 6:
    		printf("Enter your is Six");
    		break;
    			case 7:
    		printf("Enter your is Seven");
    		break;
    			case 8:
    		printf("Enter your is Eigth");
    		break;
    			case 9:
    		printf("Enter your is Nine");
    		break;
    			case 10:
    		printf("Enter your is Ten");
    		break;
    		
    		default:
    			printf("Invalid choice ");
    		
    		
	}
}
