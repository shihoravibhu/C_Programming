#include<stdio.h>

void main(){

    int n , i , table ;

    printf("enter number n :");
    scanf("%d",&n);

    for(i=1;i<=10;i++){

        printf("%d * %d = %d \n",n,i,i*n);

    }
}