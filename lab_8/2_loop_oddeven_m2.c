#include <stdio.h>

void main()
{

    int i = 1, n;

    printf("enter n:");
    scanf("%d", &n);

    do{
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }while(i<=n);
}