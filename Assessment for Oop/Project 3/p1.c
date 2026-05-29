/*Mini Project: Student Productivity Tracker Objective Build a console-based Student
 Productivity Tracker that logs daily study hours and generates a weekly report.
  Your application must:
   1. Menu-driven program 
   2. Log daily study hours 
   3. Generate weekly report 
   4. Store data using files */
   


#include <stdio.h>

int main() {

    FILE *fp;

    int choice;
    int day = 1;

    float hours;
    float total = 0;
    float average;

    while(choice != 3) {

        printf("\n===== Student Productivity Tracker =====");

        printf("\n1. Log Daily Study Hours");
        printf("\n2. Generate Weekly Report");
        printf("\n3. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                fp = fopen("study.txt", "a");

                printf("\nEnter Study Hours for Day %d: ", day);
                scanf("%f", &hours);

                fprintf(fp, "%.2f\n", hours);

                fclose(fp);

                printf("Study Hours Saved Successfully!");

                day++;

                break;

            case 2:

                fp = fopen("study.txt", "r");

                if(fp == NULL) {

                    printf("\nNo Study Data Found!");
                    break;
                }

                total = 0;
                day = 0;

                printf("\n===== Weekly Study Report =====\n");

                while(fscanf(fp, "%f", &hours) != EOF) {

                    printf("Day %d Study Hours = %.2f\n", day + 1, hours);

                    total = total + hours;

                    day++;
                }

                average = total / day;

                printf("\nTotal Study Hours = %.2f", total);

                printf("\nAverage Study Hours = %.2f", average);

                fclose(fp);

                break;

            case 3:

                printf("\nProgram Closed Successfully!");
                break;

            default:

                printf("\nInvalid Choice!");
        }
    }

    return 0;
}



