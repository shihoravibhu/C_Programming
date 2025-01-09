// armstong number => 3^3 + 7^3 + 1^3 = 371

#include <stdio.h>

void main()
{

    int n, rem, i = 1, sum = 0 , original_n;

    printf("enter no. n : ");
    scanf("%d", &n);

    original_n = n ;



    while (n != 0)
    {

        rem = n % 10;

        sum = sum + rem * rem * rem;

        n = n / 10;
    }
    if (sum == original_n)
    {

        printf("n is armstrong number.");
    }
    else
    {
        printf("n is not  armstrong number.");
    }
}