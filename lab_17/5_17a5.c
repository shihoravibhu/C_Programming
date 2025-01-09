#include <stdio.h>

void main()
{

    int n;

    printf("enter no of element : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

     int *p=a;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(p+i));
    }
}