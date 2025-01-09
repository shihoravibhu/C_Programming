#include <stdio.h>

void main()
{

    int n, k = 0;

    printf("enter number of element n :");
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {

        printf("enter num a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (i == 0 || a[i] != a[i + 1])
        {

            a[k] = a[i];
            k++;
        }
    }

    printf("total no. of unique element : %d\n", k);

    printf("array with unique element : \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", a[i]);
    }
}
