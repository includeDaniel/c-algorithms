/* Make an algorithm that takes 2 integers x and y and calculates the remainder of division x / y */
#include <stdio.h>

int main()
{
    int x, y, remainder;
    printf("Type the 'x' : ");
    scanf("%d", &x);
    printf("Type the 'y': ");
    scanf("%d", &y);

    remainder = x % y;
    printf("The remainder is: %d", remainder);
    return 0;
}