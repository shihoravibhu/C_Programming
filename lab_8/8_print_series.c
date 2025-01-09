#include <stdio.h>

void main()
{
    int i = 1, sum = 1;

    while (sum < 50)
    {
        printf("%d\n", i);
        i = i + 3;
        sum++;
    }
}