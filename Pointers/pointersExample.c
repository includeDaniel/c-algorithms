#include <stdio.h>
#include <stdlib.h>

void main()
{
    int integer = 1;
    int *integerPtr = &integer;
    float real = 2.5;
    float *realPtr = &real;
    char character = 'd';
    char *characterPtr = &character;

    printf("BEFORE\n");
    printf("%d\n", integer);
    printf("%f\n", real);
    printf("%c\n", character);
    printf("\n");
    printf("Adress\n");
    printf("%p\n", integerPtr);
    printf("%p\n", realPtr);
    printf("%p\n", characterPtr);
    printf("\n");

    *integerPtr = 5;
    *realPtr = 8.5;
    characterPtr = "s";

    printf("AFTER\n");
    printf("%d\n", integer);
    printf("%f\n", real);
    printf("%c\n", *characterPtr);
}
