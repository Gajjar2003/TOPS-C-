 // Find a simaple interest
 
 
 #include<stdio.h>
 
 main()
 {  
    float principal,rate,time,interest;
    
    printf("Enter a principal value: ");
    scanf("%f", &principal);
 	printf("\nEnter a rate value: ");
 	scanf("%f",&rate);
 	printf("\nEnter a time duration: ");
 	scanf("%f",&time);
 	
 	interest= (principal*rate*time) /100;
 	printf("%.2f",interest);
 
 }
