#include <stdio.h>
#include <stdlib.h>

int main()
{
    double arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Type a number to %d position of array: ", i);
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf\n", arr[i]);
    }
    return 0;
}
