#include <stdio.h>

int main()
{
    float base, height, area;
    printf("type the base: ");
    scanf("%f", &base);
    printf("type the height: ");
    scanf("%f", &height);
    area = base * height / 2;
    printf("The area is: %.2f m2", area);
    return 0;
}
