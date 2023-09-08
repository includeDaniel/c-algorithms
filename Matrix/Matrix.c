#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nRow = 3;
    int nCol = 3;
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
            printf("%d", mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            if (i == j)
            {
                printf("%d", mat[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            if (i + j == 2)
            {
                printf("%d", mat[i][j]);
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            if (i > j)
            {
                printf("%d", mat[i][j]);
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}