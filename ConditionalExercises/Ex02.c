// Write an algorithm that takes an integer and checks whether it is even or odd.

#include <stdio.h>

int main()
{
    int n1;
    printf("Type a integer: ");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("Even!");
    }
    else
    {
        printf("Odd!");
    }

    return 0;
}