#include <stdio.h>

void main()
{

    int a, b, c, largest, result;

    printf("enter a,b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a > b)
    {
    case 1:
        largest = a;
        break;
    case 0:                                     // 0=false 
        largest = b;
        break;
    }
    result=c*largest;
    printf("%d" , result);

}