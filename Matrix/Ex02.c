/*
Write an algorithm that fills a 4x4 matrix and shows the number of elements greater than
15 and under 25.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nRow = 4;
    int nCol = 4;
    int mat[nRow][nCol];

    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            if ((mat[i][j] > 15) && (mat[i][j] < 25))
            {
                printf("%d", mat[i][j]);
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}