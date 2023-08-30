/* Sejam P(x1, y1) e Q(x2, y2) dois pontos quaisquer no plano. A distância entre os pontos é dada por
d = √(x2 − x1) 2 + (y2 − y1)2.
Faça um algoritmo que leia as coordenadas dos dois pontos, determine e escreva a distância entre eles.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, pointsDistance;
    printf("Type the x of the first point: ");
    scanf("%lf", &x1);
    printf("Type the y of the first point: ");
    scanf("%lf", &y1);
    printf("Type the x of the second point: ");
    scanf("%lf", &x2);
    printf("Type the y of the second point: ");
    scanf("%lf", &y2);

    pointsDistance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("The points distance is: %f", pointsDistance);

    return 0;
}