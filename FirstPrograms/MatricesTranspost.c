#include <stdio.h>

int main(void)
{

    int nLin = 2;
    int nCol = 3;
    int mat[2][3];

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
            printf("%d", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}