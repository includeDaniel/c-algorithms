#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n = 5, average;
    int grades[n];
    srand(time(NULL));
    for (i = 0; i <= n - 1; i++)
    {
        grades[i] = rand() % 11;
    }
    printf("The average of the grades are: %.2f", i);
    return 0;
}