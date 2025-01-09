#include<stdio.h>

void main () {

    int n ;

    printf("enter elements n : ");
    scanf("%d" ,&n);

    int a[n] ;

    for(int i = 0 ; i < n ; i++){

        printf("enter element a[%d] :",i);
        scanf("%d",&a[i]);
    } 

    for(int i = n-1 ; i >= 0 ; i--){   

         printf("%d " , a[i]);   
    }
}