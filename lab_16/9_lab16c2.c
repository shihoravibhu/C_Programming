#include <stdio.h>

int main()
{
    int n, i = 0, j = 0;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the element of array a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > i || i == j)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}