#include<stdio.h>

void main (){

    int sum=0 , i=1,n;

    printf("enter the range of number :");
    scanf("%d",&n);

    while(i<=n){

        sum=sum+i*i;

        i++;


    }
    printf("sum=%d",sum);
}