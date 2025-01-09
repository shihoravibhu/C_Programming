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

    if(x==1){

        return 1 ;

    }

    else { 

        return x * fac(x-1) ;

    }

}