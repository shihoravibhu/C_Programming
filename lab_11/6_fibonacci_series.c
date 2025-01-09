// Fibonacci Series = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// strating from 0 , 1
//sum of two no. (baju baju na no. no sum karvo)

#include<stdio.h>

void main (){
    
    int first=0 , second=1 , next ,n ,i ;

    printf("enter number term :");
    scanf("%d",&n);


    for (int i=0;i<n;i++){

        if(i<=1){
            next=i;
        }
        else {
            next=first+second;
            first = second ;
            second = next ;
        }
        printf("%d,", next);

        
    }
    
}