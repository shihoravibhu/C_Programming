#include <stdio.h>

void main()
{

    int n, rem1, rem2, sum;

    printf("enter no. n : ");
    scanf("%d", &n);

    rem2 = n % 10;       // no. no last digit leva matee

    while (n != 0)       // no. no first digit leva matee loop karvii
    {
        rem1 = n % 10;
        n = n / 10;
    }

    sum = rem1 + rem2;

    printf("%d\n", sum);
    printf("%d\n", rem1);
    printf("%d\n", rem2);
}