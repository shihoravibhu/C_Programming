#include<stdio.h>

void main (){

    int n ;

    printf("enter elements n : ");
    scanf("%d" ,&n);

    int a[n] , b[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter element a[%d] :",i);
        scanf("%d",&a[i]);
    } 
    for(int i = 0 ; i < n ; i++){

        b[i]=a[i];

    }

    for(int i = 0 ; i < n ; i++){

        printf("%d " , b[i]); 
    }

}