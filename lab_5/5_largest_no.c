#include<stdio.h>

void main() {
    int a,b,c ;

    printf("enter a,b,c : ");
    scanf("%d %d %d" , &a , &b , &c);

    (a>b)?((a>c)?(printf("largest no a")):(printf("largest no c"))):((b>c)?(printf("largest no b")):(printf("largest no c"))) ;
}