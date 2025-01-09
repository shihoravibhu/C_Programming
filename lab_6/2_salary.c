#include <stdio.h>

void main()
{

    float basicSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary >= 30000)
    {
        printf("grosssalary : %.2f\n", (basicSalary + (basicSalary * 0.3) + (basicSalary * 0.95)));
    }
    else if (basicSalary >= 20000)
    {
        printf("grosssalary : %.2f\n", (basicSalary + (basicSalary * 0.25) + (basicSalary * 0.90)));
    }
    else if (basicSalary >= 10000)
    {
        printf("grosssalary : %.2f\n", (basicSalary + (basicSalary * 0.2) + (basicSalary * 0.80)));
    }
    else
    {
        printf("below salary\n");
    }
}