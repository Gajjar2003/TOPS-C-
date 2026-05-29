/*A student writes a program to calculate average marks using int variables and gets 
incorrect output. Identify the probable cause and explain how choosing the correct data type solves the issue. */

#include <stdio.h>

int main() {

    float m1 = 85;
    float m2 = 86;
    float m3 = 87;

    float average;

    average = (m1 + m2 + m3) / 3;

    printf("Average = %.2f", average);

    return 0;
}
