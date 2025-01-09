#include <stdio.h>

void main()
{

    int n;

    printf("enter no of element : ");
    scanf("%d", &n);

    int a[n] ,b[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int *a_ptr = a ;
    int *b_ptr = b ;

    for (int i = 0; i < n; i++){

        *(b_ptr+i) = *(a_ptr+i) ;
    }

    for (int i = 0; i < n; i++){

    printf("%d ",b[i]);

    }

}