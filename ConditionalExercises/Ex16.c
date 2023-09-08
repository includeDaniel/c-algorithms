#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float);
float h(float);
float g(float);

void main()
{
    float x, h1, f1, g1;
    printf("Type the 'x' value: ");
    scanf("%f", &x);
    h1 = h(x);
    printf("%f\n", h1);
    f1 = f(h1);
    printf("%f\n", f1);
    g1 = g(x);
    printf("%f\n", g1);
}

float h(float x)
{
    return pow(x, 2) - 16;
}

float f(float h1)
{
    if (h1 >= 0)
    {
        return h1;
    }
    else
    {
        return 1;
    }
}

float g(float x)
{
    if (x > 5)
    {
        return pow(x, 2) + 16;
    }
    else
    {
        return -x / 2;
    }
}
