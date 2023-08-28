/*Create an algorithm that calculates the sum and product of 3 numbers provided by the user.*/
#include <stdio.h>

int main()
{
    float A, B, C, Sum, Product;
    printf("Type the number 'A': ");
    scanf("%f", &A);
    printf("Type the number 'B': ");
    scanf("%f", &B);
    printf("Type the number 'C': ");
    scanf("%f", &C);
    Sum = A + B + C;
    Product = A * B * C;
    printf("The sum of the numbers are: %.2f", Sum);
    printf("\nThe product of the numbers are: %.2f", Product);
    return 0;
}