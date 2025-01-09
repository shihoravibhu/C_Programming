#include<stdio.h>

void main () {

    int n ;
    

    printf("enter range n : ");
    scanf("%d",&n);

    int a[n] ;

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);
    }

    for(int i = 0 ; i < n ; i++){

        printf("%d " ,a[i]);
    }
    printf("\n");

    printf("reverse : \n");

     for(int i = n-1 ; i >= 0; i--){

        printf("%d " ,a[i]);
    }
}