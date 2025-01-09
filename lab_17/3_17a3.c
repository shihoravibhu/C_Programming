#include<stdio.h>

void main (){

    int a = 9 , b = 8 , *ptr1 , *ptr2 ;

    ptr1 = &a ;
    ptr2 = &b ;

    printf("sum : %d",*ptr1+*ptr2);
}