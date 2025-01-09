#include <stdio.h>

void main()
{
    int i=1, n, factorial = 1;

    printf("enter n :");
    scanf("%d", &n);

    

    while (i<=n)
    {
        factorial = factorial * i;
        
        i++;
    }

    printf("%d", factorial);
}