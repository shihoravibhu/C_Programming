#include<stdio.h>

void main () {
    float p,r,t,intrest ;

    printf("enter p,r,t : ");
    scanf("%f %f %f" , &p ,&r ,&t);

    intrest = p*r*t*0.01 ;

    printf("%f" , intrest);

}