// Function type of retrun and parameter


// without retrun and without parameter

#include<stdio.h>

void display()
{
	printf("Well come to tops");
}


// without return and with paramter


void add (int a,int b)
{
	int c=a+b;
	printf("\nAddition=%d",c);
	
}

//with return and with parameter


int squ(int num)
{
	int s=num*num;
}


//with return and without parameter


float areaOfCircle()
{
	int r;
	float area;
	printf("\nEnter this redius:");
	scanf("%d",&r);
	area=3.14*r*r;
	return area;
}



main()
{
	display();
	add(10,20);
	printf("\nThis value of squre=%d",squ(14));
	printf("\n Circle of area redius=%f",areaOfCircle());
}
