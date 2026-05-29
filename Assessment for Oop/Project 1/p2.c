/*. You are asked to design a program that calculates employee salary with multiple
 conditions (bonus, tax, overtime). Which programming constructs would you combine to solve this efficiently? */
 
 #include <stdio.h>

int main() {

    float salary, bonus, overtime, tax, total;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    if(salary > 50000) {
        bonus = 5000;
    }
    else {
        bonus = 2000;
    }

    overtime = 1500;
    tax = salary * 0.10;

    total = salary + bonus + overtime - tax;

    printf("Total Salary = %.2f", total);

    return 0;
}
