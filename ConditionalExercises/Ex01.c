// Write a program that reads two numbers and prints the larger one.

#include <stdio.h>

int main()
{
    float n1, n2, bigger;
    printf("Type the first number: ");
    scanf("%f", &n1);
    printf("Type the second number: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        bigger = n1;
    }
    else
    {
        bigger = n2;
    }

    printf("The larger number is %.2f", bigger);

    return 0;
}