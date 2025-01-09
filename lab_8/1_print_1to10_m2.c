#include <stdio.h>

void main()
{

    int i = 1, n;

    printf("enter n:");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i++);

    } while (i <= n);
}