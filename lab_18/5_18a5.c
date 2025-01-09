#include<stdio.h>

void swp(int *x , int *y);

void main (){

    int a , b ;

    printf("enter a and b : ");
    scanf("%d %d",&a,&b);

     swp(&a,&b);

    
}

void swp(int *x , int *y){

    int temp = *x ;
    *x = *y ;
    *y = temp ;

    printf("%d %d", *x , *y );

}