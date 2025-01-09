#include <stdio.h>

void main()
{

    int n ;

    printf("enter n : ");
    scanf("%d", &n);

    switch (n%2)
    {
    case 0:
        printf("n is even\n");
        break;
    case 1:
        printf("n is odd\n");
        break;
    }
}