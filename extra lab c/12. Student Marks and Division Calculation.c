/*12. Student Marks and Division Calculation*/

#include<stdio.h>

int main()
{
    int maths, phy, chem, total, roll_number;
    float percentage;

    
    printf("Enter student roll number: ");
    scanf("%d", &roll_number);

    
    printf("Enter your Maths, Physics, and Chemistry marks: ");
    scanf("%d %d %d", &maths, &phy, &chem);

  
    total = maths + phy + chem;
    percentage = total / 3.0;

    
    if(percentage >= 70)
    {
        printf("\nYou are in First Division.");
    }
    else if(percentage >= 50)
    {
        printf("\nYou are in Second Division.");
    }
    else if(percentage >= 40)
    {
        printf("\nYou are in Third Division.");
    }
    else
    {
        printf("\nYou have Failed.");
    }

    
    printf("\nStudent Roll Number: %d", roll_number);
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%\n", percentage);

    return 0;
}

