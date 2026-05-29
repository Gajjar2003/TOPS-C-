/*25. Geometrical Shapes Area Calculator*/

#include <stdio.h>  

 main ()
{
      int choice,r,l,w,b,h;  
      float area;  

     
      printf("Press 1 for area of circle\n");
      printf("Press 2 for area of rectangle\n");
      printf("Press 3 for area of triangle\n");
      printf("Enter your choice : ");
      scanf("%d",&choice); 

      switch(choice)  
      {
           case 1:
                 printf("Enter radius of the circle : ");  
                 scanf("%d",&r);  
                 area=3.14*r*r; 
                 break;
            case 2:
                  printf("Enter length and width of the rectangle : ");  
                  scanf("%d%d",&l,&w);  
                  area=l*w; 
                  break;
            case 3:
                  printf("Enter the base and height of the triangle :");  
                  scanf("%d%d",&b,&h);  
                  area=.5*b*h;  
                  break;
          }

          printf("The area is : %f\n",area);  
}
