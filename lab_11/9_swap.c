#include<stdio.h>

void main(){

    int n , i , rem , t , a , b , rev = 0 , rem2 , rev2=0;

    printf("enter number n :");
    scanf("%d",&n);

    a = n % 10 ; //  for last digit 

    for (i=0;n!=0;i++){
        rem = n % 10 ;
        rev = rev * 10 + rem ;
        n = n / 10 ; 
    }
    b = rev % 10 ;
    rev = rev - b ;
    rev = rev + a ;

    for (int j = 0 ;rev!=0 ; j++){
        rem2 = rev % 10 ;
        rev2 = rev2 * 10 + rem2 ;
        rev = rev / 10 ;
        
    }
     rev2 = rev2 - a ;
     rev2 = rev2 + b ;

     printf("%d" , rev2);

    

}