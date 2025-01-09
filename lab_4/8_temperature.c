#include<stdio.h>

void main(){
    float c,f ;

    printf("enter fahrenheit : ");
    scanf("%f" , &f);

    c=((f-32)*5)/9 ;

    printf("%f" , c);
}