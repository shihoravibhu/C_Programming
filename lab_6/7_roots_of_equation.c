#include <stdio.h>

#include <math.h>

void main()
{

    double a, b, c, D, root1, root2, iamgpart, realpart;

    printf("enter coefficients a,b,c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - (4 * a * c);

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("roots are real amd diffrent.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    else if (D = 0)
    {
        root1 = root2 = (-b / (2 * a));
        printf("roots are real and equal.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    else
    {
        realpart = -b / (2 * a);
        iamgpart = sqrt(-D) / (2 * a);
        root1 = realpart + iamgpart;
        root2 = realpart - iamgpart;
        printf("roots are complex and diffrent.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
}