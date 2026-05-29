/*You need to store student records with name, marks, and grade. Why would you choose a structure over multiple arrays in this scenario? */

#include <stdio.h>

struct Student {

    char name[50];
    int marks;
    char grade;
};

int main() {

    struct Student s1;

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%d", &s1.marks);

    printf("Enter Grade: ");
    scanf(" %c", &s1.grade);

    printf("\nStudent Details");

    printf("\nName: %s", s1.name);
    printf("\nMarks: %d", s1.marks);
    printf("\nGrade: %c", s1.grade);

    return 0;
}
