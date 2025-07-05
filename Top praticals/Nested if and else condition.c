// Find a Nested if and else condition

#include<stdio.h>

main()
{
	int maths,phy,chem,total,subtotal;
	
	printf("Enter a marks for Maths,phy,chem:");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths >= 65 && phy >=55 && chem >=50)
	{
		total=maths+phy+chem;
		subtotal=maths+phy;
	
	if(total >=190 || subtotal >= 140)
      {
      	printf("\nEligible For Admission");
      	
	  }
	  
	  else
	  {
	  	printf("You are not eligible for admission");
	  }
	

    }

}


