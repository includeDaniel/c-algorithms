#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    double arr[20], sum;

    for (int i = 0; i < 20; i++)
    {
        printf("Type a number to %d position of array: ", i);
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        sum += pow(arr[i] - arr[19 - 0], 2);
    }
    printf("%.2lf", sum);
}
