#include <stdio.h>

void main()
{

    int n, rem;

    printf("enter n :");
    scanf("%d", &n);

    while (n != 0)
    {

        rem = n % 2;
        
        printf("%d", rem);

        n = n / 2;
    }
}