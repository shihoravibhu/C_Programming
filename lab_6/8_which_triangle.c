#include <stdio.h>
#include <math.h>

void main()
{

    float side1, side2, side3;

    printf("enter sides : ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // • Equilateral: All three sides are equal.

    // • Isosceles: Any two sides are equal.

    // • Scalene: No sides are equal.

    if (side1 == side2 && side2 == side3)
    {
        printf("triangle is equilateral.\n");
    }
    else if (side1 == side2 || side2 == side3)
    {
        printf("triangle is isosceles.\n");
    }
    else
    {
        printf("triangle is scalene.\n");
    }

    if ((pow(side1, 2) == pow(side2, 2) + pow(side3, 2)) ||
        (pow(side2, 2) == pow(side1, 2) + pow(side3, 2)) ||
        (pow(side3, 2) == pow(side1, 2) + pow(side2, 2)))
    {
        printf("The triangle is also right angle.\n");
    }
}