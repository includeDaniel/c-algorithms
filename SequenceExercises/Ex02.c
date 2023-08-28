/*Create an algorithm that calculates the arithmetic mean of 3 numbers provided by the user*/
#include <stdio.h>

int main()
{
    float grade1, grade2, grade3, average;
    printf("Type the first grade: ");
    scanf("%f", &grade1);
    printf("Type the second grade: ");
    scanf("%f", &grade2);
    printf("Type the third grade: ");
    scanf("%f", &grade3);
    average = (grade1 + grade2 + grade3) / 3;
    printf("The average of the grades is: %.2f points.", average);
    return 0;
}