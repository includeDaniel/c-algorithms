/*Write an algorithm to calculate the area of ​​a trapezoid. The algorithm must read the value of the smaller base, from the base
bigger and taller. Then print the area value of the trapezoid.*/
#include <stdio.h>

int main()
{
    float s, b, h, area;
    printf("Type the smaller base: ");
    scanf("%f", &s);
    printf("Type the bigger base: ");
    scanf("%f", &b);
    printf("Type the height: ");
    scanf("%f", &h);

    area = ((s + b) * 2) / 2;

    printf("The Trapeze area is: %.2f", area);

    return 0;
}