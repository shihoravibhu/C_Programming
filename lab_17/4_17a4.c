#include<stdio.h>

void main (){

    int *p , a = 8 , b = 7 ;

    *p = a ;
    a = b ;
    b = *p ;

    printf("a : %d \nb : %d",a,b);
     
}