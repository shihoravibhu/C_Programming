#include <stdio.h>

void main()
{
    int i=0, n, x, pow=1 ;

    printf("enter no. n and pow x : ");
    scanf("%d %d", &n, &x);

    while (i != x)
    {
        
        pow = pow * n ;

        i++;
    }
    printf("%d",pow);
}