// palindrome number = evo no k teno reverse karvathi ej number avto hoii te
// ex- 121 teno rervse=121 j thai mate apel number palindrome number che

#include <stdio.h>

void main()
{

    int n, rem, original_n, reverse_n = 0;

    printf("enter no. n : ");
    scanf("%d", &n);

    original_n = n;

    while (n != 0)
    {
        rem = n % 10;

        reverse_n = reverse_n * 10 + rem;

        n = n / 10;
    }

    if (original_n == reverse_n)
    {
        printf("n is pelindrome number.");
    }

    else
    {
        printf("n is'nt pelindrome number.");
    }
}