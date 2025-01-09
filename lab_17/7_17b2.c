#include <stdio.h>

void main()
{

    int n , temp ;

    printf("enter no of element : ");
    scanf("%d", &n);

    int a[n], b[n] ;

    for (int i = 0; i < n; i++)
    {
        printf("enter value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter value of b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    int *a_ptr = a ;
    int *b_ptr = b ;
    
    for (int i = 0; i < n; i++){

        temp = *(a_ptr + i) ;
        *(a_ptr + i)=*(b_ptr + i) ;        
        *(b_ptr + i) = temp ;

    }
    // Print the swapped arrays
    printf("The elements of the first array after swapping are:\n");

    for (int i = 0; i < n; i++){

        printf("%d ",a[i]);
    }

    printf("\nThe elements of the second array after swapping are:\n");

    for (int i = 0; i < n; i++) { 
        printf("%d ", b[i]);
    }



}