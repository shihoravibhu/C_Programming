#include<stdio.h>

int cmp(int x , int y) ;

void main (){

    int a , b ;

    printf("enter no.  a and b : ");
    scanf("%d %d",&a,&b);

    int res = cmp(a,b);

    printf("max : %d",res);

    
}

int cmp(int x , int y){

   int max ;

   if(x > y){

    max = x ;
   }   

   else {

    max = y ;
   } 

   return max ;


}