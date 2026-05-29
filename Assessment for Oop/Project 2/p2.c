/* Loops + Arrays Create a program that: 
? Accepts 7 days of screen time data ? 
Calculates and prints: ? Total screen time ?
 Average screen time ? 
 Displays a warning if average exceeds healthy limit */
 
 #include <stdio.h>

int main() {

    int screenTime[7];
    int i, total = 0;
    float average;

    printf("Enter Screen Time for 7 Days:\n");

    for(i = 0; i < 7; i++) {

        printf("Day %d: ", i + 1);
        scanf("%d", &screenTime[i]);

        total = total + screenTime[i];
    }

    average = total / 7.0;

    printf("\nTotal Screen Time = %d Hours", total);
    printf("\nAverage Screen Time = %.2f Hours", average);

    if(average > 6) {
        printf("\nWarning: Screen time exceeds healthy limit!");
    }
    else {
        printf("\nScreen time is healthy.");
    }

    return 0;
}
