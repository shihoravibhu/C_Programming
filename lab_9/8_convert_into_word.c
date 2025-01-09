#include <stdio.h>
#include <math.h>
void main()
{
    int n, i = 1, rem, h = 0;
    printf("enter the number:\n");
    scanf("%d", &n);
    
    for (i = 1; n != 0; i++)
    {
        rem = n % 10;
        h = h * 10 + rem;
        n = n / 10;
    }
    n = h;
    printf("\n");

    int a, j = 1;
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;

        switch (a)
        {
        case 1:
            printf(" one ");
            break;
        case 2:
            printf(" two ");
            break;
        case 3:
            printf(" three ");
            break;
        case 4:
            printf(" four ");
            break;
        case 5:
            printf(" five ");
            break;
        case 6:
            printf(" six ");
            break;
        case 7:
            printf(" seven ");
            break;
        case 8:
            printf(" eight ");
            break;
        case 9:
            printf(" nine ");
            break;
        }
        j++;
    }
}