// Write an algorithm that takes an integer and checks whether it is even or odd.

#include <stdio.h>

int main()
{
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("par!");
    }
    else
    {
        printf("impar!");
    }
}