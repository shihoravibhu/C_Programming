#include <stdio.h>

void main()
{
    int i = 1, n, sum = 0, mains = 0, total_s;

    printf("enter range n : ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            mains = mains - i;
        }
        i++;
    }
    total_s = sum + mains;

    printf("%d is sum of series.", total_s);
}