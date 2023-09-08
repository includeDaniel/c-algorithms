#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[5], temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Type a number to %d position of array: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The array in crescent order:");

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}
