#include <stdio.h>
#include <math.h>

int SumOfNumbers()
{
    float a, b, sum;
    printf("Type the first number: ");
    scanf("%f", &a);
    printf("Type the second number: ");
    scanf("%f", &b);

    sum = a + b;

    printf("The sum is: %.2f", sum);

    return 0;
}

int SquareRoot()
{
    double a, squareRoot;
    printf("Type the number: ");
    scanf("%lf", &a);

    squareRoot = sqrt(a);

    printf("The Square Root is: %.2lf", squareRoot);

    return 0;
}

int main()
{
    int option;
    printf("Menu of options: \n");
    printf("----------------------------------\n");
    printf("1. Sum two numbers\n");
    printf("2. Square root of a number\n");
    printf("----------------------------------\n");
    printf("Type one option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        SumOfNumbers();
        break;
    case 2:
        SquareRoot();
        break;
    default:
        printf("You typed an non-existent option");
        break;
    }

    return 0;
}
