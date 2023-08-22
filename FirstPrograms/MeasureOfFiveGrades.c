#include <stdio.h>

int main()
{
    float grades[5], average;
    printf("Type the first grade: ");
    scanf("%f", &grades[0]);
    printf("Type the second grade: ");
    scanf("%f", &grades[1]);
    printf("Type the third grade: ");
    scanf("%f", &grades[2]);
    printf("Type the fourth grade: ");
    scanf("%f", &grades[3]);
    printf("Type the fifth grade: ");
    scanf("%f", &grades[4]);

    average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5;

    printf("The average of the grades are: %.2f", average);

    return 0;
}