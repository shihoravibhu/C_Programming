#include<stdio.h>

void main (){

    int n=1,sum=0,i=1,avg;

    while(i<=10){
        if(((n*n)%10)==9) {
            sum = sum +(n*n);
            i++;
        }
        n++;
        
    }
    avg = sum/10;
    printf("%d %d",sum,avg);
}