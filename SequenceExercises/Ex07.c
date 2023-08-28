/*Run an algorithm that reads the sides of a rectangle and calculates its area and perimeter.*/

#include <stdio.h>

int main()
{
    float l1, l2, l3, l4, area, perimeter;
    printf("type the sides");
    printf("\n'l1': ");
    scanf("%f", &l1);
    printf("'l2': ");
    scanf("%f", &l2);
    printf("'l3': ");
    scanf("%f", &l3);
    printf("'l4': ");
    scanf("%f", &l4);
    area = l1 * l2;
    perimeter = l1 + l2 + l3 + l4;
    printf("The area is: %.2f m2", area);
    printf("\nThe perimeter is: %.2f m", perimeter);
    return 0;
}