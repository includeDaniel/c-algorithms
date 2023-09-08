#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    double grades[10], sum, max = 0, min = 100;
    for (int i = 0; i < 10; i++)
    {
        printf("Type the grade of the student %d: ", i + 1);
        scanf("%lf", &grades[i]);
        sum += grades[i];

        if (grades[i] < min)
        {
            min = grades[i];
        }

        if (grades[i] > max)
        {
            max = grades[i];
        }
    }

    printf("bigger grade %.2lf\n", max);
    printf("smaller grade %.2lf\n", min);
    printf("The average of the grades: %.2lf\n", sum / 10);
}
