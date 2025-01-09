#include<stdio.h>

void main(){

    int x , i , table , pow=1 , n;

    printf("enter number x and power n :");
    scanf("%d %d",&x,&n);

    for(i=1;i<=n;i++){

        pow = pow * x ;        

    }

    printf("%d^%d=%d",x,n,pow);
}