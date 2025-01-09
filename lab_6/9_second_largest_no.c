#include <stdio.h>

void main()
{

    int a, b, c;

    printf("enter no. a,b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c) || (a >= c && a <= b))
    {
        printf("second largest no. is %d", a);
    }
    else if ((b >= c && b <= a) || (b >= a && b <= c))
    {
        printf("second largest no. is %d", b);
    }
    else
    {
        printf("second largest no. is %d", c);
    }
}