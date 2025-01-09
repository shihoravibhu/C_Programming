#include<stdio.h>

int fac(int x);

void main () {

    int n ;

    printf("enter n : ");
    scanf("%d",&n);

    int res = fac(n);

    printf("%d",res);

}

int fac(int x){

    int factorial=1 ;

    for(int i = 1 ; i <= x ; i++ ){

        factorial*= i ;


    }
    return factorial ;

}