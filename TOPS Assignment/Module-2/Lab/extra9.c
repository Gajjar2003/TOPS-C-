//Sum of Digits taks

#include<stdio.h>

main()

{
	int num,sum, digits,originalNum;
	
	printf(" Please Enter your number: ");
	scanf("%d",&num);
	
	originalNum = num;
	
	    if (num < 0) {
        num = -num;
    }

	
	while(num > 0)
	{
		digits = num %10;
		sum += digits;
		num=num /10;
	}
	printf("This sum of digits=%d",sum, originalNum);
}
