/*Conditional Logic Implementation Design a “Study Mood Assistant” that: 
? Takes user input: hours studied today ?
 Displays motivation messages based on conditions ? 
 Uses if-else ladder or switch case */
 
 #include <stdio.h>

int main() {

    int hours;

    printf("Enter hours studied today: ");
    scanf("%d", &hours);

    if(hours >= 8) {
        printf("Excellent! Keep Working Hard.");
    }
    else if(hours >= 5) {
        printf("Good Job! You are doing well.");
    }
    else if(hours >= 2) {
        printf("You need more focus.");
    }
    else {
        printf("Start studying seriously!");
    }

    return 0;
}
