#include <stdio.h>

int main(void)
{

    int nLin = 3;
    int nCol = 3;
    int mat[3][3];

    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < nCol; i++)
    {
        for (int j = 0; j < nLin; j++)
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
    return 0;
}