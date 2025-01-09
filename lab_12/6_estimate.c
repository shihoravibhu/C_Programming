// Formula: e=1+1/1!+1/2!+1/3!+1/4!…
#include <stdio.h>

int main()
{

    int i, j, n, fac = 1;
    float e = 1.0;

    printf("enter a no of term : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {         int fac = 1 ; // reset factorial value for each term
        for (j = 1; j <= i; j++)
        {

            fac *= j;

            
        }
        e += 1.0 / fac;
    }

    printf("%f", e);

    return 0;
}
