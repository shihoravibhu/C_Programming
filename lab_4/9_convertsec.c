#include<stdio.h>

void main (){
    int h , m , s ;

    printf("enter s : ");
    scanf("%d" , &s);

    h=(s/3600);
    m=(s-(3600*h))/60;
    s=(s-(3600*h)-(m*60));

    printf("%d\n" , h);
    printf("%d\n" , m);
    printf("%d\n" , s);

}