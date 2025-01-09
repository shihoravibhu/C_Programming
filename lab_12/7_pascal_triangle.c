// pascal triangle
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1

#include <stdio.h>

void main()
{

    int i, j, coef = 1;

    for (i = 0; i < 5; i++)
    {
        for (int space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {

            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
}