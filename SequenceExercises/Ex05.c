/*Make an algorithm that takes a positive number, calculates and displays:
• the number cubed;
• the square root of the number;
• the cube root of the number;
• the sin of the number;
• the cosine of the number*/

#include <stdio.h>
#include <math.h>

int main()
{
    float number, cubed, squareRoot, cubeRoot, numberSin, numberCos;
    printf("Type a positive number: ");
    scanf("%f", &number);

    cubed = pow(number, 3);
    squareRoot = sqrt(number);
    cubeRoot = pow(number, 1.0 / 3.0);
    numberSin = sin(number);
    numberCos = cos(number);

    printf("The number cubed: %.2f", cubed);
    printf("\nThe square root of the number: %.2f", squareRoot);
    printf("\nThe cube root of the number: %.2f", cubeRoot);
    printf("\nThe sin of the number: %.2f", numberSin);
    printf("\nThe cos of the number: %.2f", numberCos);
    return 0;
}