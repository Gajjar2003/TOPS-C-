/*8. Largest of Three Numbers*/

#include<stdio.h>

main()
{
    int num1, num2, num3;

    printf("Enter your first, second, and third number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("First number is largest");
    }
    else if(num2 > num3)
    {
        printf("Second number is largest");
    }
    else
    {
        printf("Third number is largest");
    }

 
}

