#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double arr[100];

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = pow(i, 2);
        }
        else
        {
            arr[i] = pow(i, 3);
        }
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%lf\n", arr[i]);
    }
    return 0;
}
