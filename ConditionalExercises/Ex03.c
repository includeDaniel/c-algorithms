/*
Considering the following assignments, R ← 2, S ← 5, T ← -1, X ← 3, Y ← 1 and Z ←0, solve the expressions in
pseudocode below:
(a) A ← (R >= 5) OR (T > Z) AND (X – Y + R > 3 * Z)
(b) B ← (|T| + 3 >= 4) AND NOT(3 * R / 2 < S * 3)
(c) C ← (X = 2) OR (Y = 1) AND ((Z = 0) OR (R > 3)) AND (S < 10)
(d) D ← (R ≠ S) OR NOT(√R < √X) AND (4327 * X * S * Z = 0)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int R = 2, S = 5, T = -1, X = 3, Y = 1, Z = 0;
    int A, B, C, D;

    A = (R >= 5) | (T > Z) && (X - Y + R > 3 * Z);
    printf("A: %d", A);

    printf("\n");

    B = ((T * -1) + 3 >= 4) && !(3 * R / 2 < S * 3);
    printf("B: %d", B);

    printf("\n");

    C = (X == 2) | (Y == 1) && ((Z == 0) | (R > 3)) && (S < 10);
    printf("C: %d", C);

    printf("\n");

    D = (R != S) | !(sqrt(R) < sqrt(X)) && (4327 * X * S * Z == 0);
    printf("D: %d", D);

    return 0;
}