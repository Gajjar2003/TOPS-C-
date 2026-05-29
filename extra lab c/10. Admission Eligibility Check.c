/*10. Admission Eligibility Check*/

#include <stdio.h>

 main()
{
    int Maths, Phy, Chem, total, sub;

    printf("Enter your Maths, Physics, and Chemistry marks: ");
    scanf("%d %d %d", &Maths, &Phy, &Chem);  

    if (Maths >= 65 && Phy >= 55 && Chem >= 50)
    {
        total = Maths + Phy + Chem;
        sub = Maths + Phy;

        if (total >= 190 || sub >= 140)
        {
            printf("You are eligible for admission.\n");
        }
        else
        {
            printf("You are not eligible for admission.\n");
        }
    }
    

   
}

