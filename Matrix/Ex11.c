#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A[2][2] = {1, 2, 3, 4};
    double B[2][2] = {4, 3, 2, 1};
    double C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
            printf("%.2lf", C[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
