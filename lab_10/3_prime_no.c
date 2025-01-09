// prime number = factor only 1 and n 

#include <stdio.h>

void main()
{

    int n ,  sum=0 , i=1;

    printf("enter no. n : ");
    scanf("%d", &n);

    while (i<=n){

        if(n%i==0){
            sum++;
        }
        i++;
    }
    if(sum==2){
        printf("n is prime no.");
    }
    else {
        printf("n is not prime no.");
    }


}