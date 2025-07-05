#include<stdio.h>

main()
{
	int l,w,choice,circle,area,r;
	
		printf("\nPress 1 to choice rectangle");
    	printf("\nPress 2 to choice for circle");

	
	printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1 :
			printf("Enter your langth and width :");
			scanf("%d %d",&l,&w);
			area=l*w;
			printf("length and width is a=%d",area);
			
			break;
			
			
			case 2:
				
				printf("Enter your redius:");
				scanf("%d",&r);
				circle=3.14*r*r;
				printf("Area fo circle value is a=%d",circle);
				
				break;
				
				default :
					
				printf("Your are choice is worng");
	}
	
}
