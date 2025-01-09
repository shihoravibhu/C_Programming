#include <stdio.h>

void main()
{

    int a, b, c, largest, result;

    printf("enter a,b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    result = c * largest;

    printf("%d", result);
}