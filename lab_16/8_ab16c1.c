#include <stdio.h>

int main()
{
    int n, i = 0, j = 0, count = 0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the element of array a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j && a[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count == 0)
    {
        printf("the given matrix is not a sparse matrix");
    }
    else
    {
        printf("the given matrix is a sparse matrix");
    }
}