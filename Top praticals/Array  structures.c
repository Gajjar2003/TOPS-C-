// Array  structures


#include<stdio.h>

struct Student
{
    int Roll;
    char name[20];
};

int main()
{
    struct Student s[3];
    int i;
    
    for(i=0;i<3;i++)
    {
        printf("\nPlease Enter Your Roll number and Name: ");
       scanf("%d %s", &s[i].Roll, s[i].name);
    }
    
    for(i=0;i<3;i++)
    {
        printf("\nYour Roll number is = %d, Name = %s", s[i].Roll, s[i].name);
    }
    
    return 0;
}

