#include<stdio.h>

void main () {

    int a ;

    printf("enter a : ");
    scanf("%d" , &a);

    (a&1)?printf("odd"):printf("even");
}