#include <stdio.h>

int main()
{
    int M, A, B, C, SonsAge;
    printf("Type the Mônica's age: ");
    scanf("%d", &M);
    printf("Type the First son's age: ");
    scanf("%d", &A);
    printf("Type the Second son's age: ");
    scanf("%d", &B);

    SonsAge = A + B;
    C = M - SonsAge;

    if (A > B && A > C)
    {
        printf("The highest age of all sons is: %d", A);
    }
    else if (B > A && B > C)
    {
        printf("The highest age of all sons is: %d", B);
    }
    else
    {
        printf("The highest age of all sons is: %d", C);
    }

    return 0;
}