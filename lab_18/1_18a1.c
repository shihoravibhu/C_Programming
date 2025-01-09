#include<stdio.h>

int sum(int x , int y) ;

void main (){

    int a , b ;

    printf("enter no.  a and b : ");
    scanf("%d %d",&a,&b);

    int res = sum(a,b);

    printf("%d",res);

    
}

int sum(int x , int y){

    return x + y ;    


}