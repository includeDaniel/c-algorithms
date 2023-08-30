/*Write an algorithm that reads the following information from an employer: the number of hours worked, the amount
minimum wage and the number of overtime hours worked. Calculate and show the salary the recipient will receive
following the following rules:
• the amount paid per hour worked is 1/8 of the minimum wage;
• the amount paid for overtime is worth 1/4 of the minimum wage;
• gross salary equivalent to the number of hours worked times the amount paid per hour worked;
• the amount to be received for overtime equals the number of overtime worked multiplied by the amount
overtime pay;
• the payable wage is the sum of the gross wage and the amount of overtime payable.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double hours, paymentForHour, minimumSalary, extraHours, paymentExtraHour, salary, GrossSalary, extraHoursPayment;

    printf("Type the number of work hours: ");
    scanf("%lf", &hours);
    printf("Type the minimum salary: ");
    scanf("%lf", &minimumSalary);
    printf("Type the extra work hours: ");
    scanf("%lf", &extraHours);

    paymentForHour = hours * (1.0 / 8.0) * minimumSalary;
    paymentExtraHour = extraHours * (1.0 / 4.0) * minimumSalary;
    GrossSalary = paymentForHour * hours;
    extraHoursPayment = extraHours * paymentExtraHour;
    salary = GrossSalary + extraHoursPayment;

    printf("The salary received to the employ is: %.2lf", salary);

    return 0;
}