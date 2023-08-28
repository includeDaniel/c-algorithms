/*Create an algorithm that calculates the weighted average of 4 numbers passed by the user, knowing that the weights
are respectively 1, 2, 3 and 4.*/
#include <stdio.h>

int main()
{
    float grade1, grade2, grade3, grade4, average;
    printf("Type the first grade: ");
    scanf("%f", &grade1);
    printf("Type the second grade: ");
    scanf("%f", &grade2);
    printf("Type the third grade: ");
    scanf("%f", &grade3);
    printf("Type the fourth grade: ");
    scanf("%f", &grade4);
    average = ((grade1 * 1) + (grade2 * 2) + (grade3)*3 + (grade4 * 4)) / 10;
    printf("The average of the grades is: %.2f points.", average);
    return 0;
}
