#include <stdio.h>

void main()
{

    int n ,  flag=0 , i=2;

    printf("enter no. n : ");
    scanf("%d", &n);

    while(i<n){
        if(n%i==0){
            flag=1;
        }
        i++;
    }
    if(flag==0){
        printf("n is prime number.");
    }
    else{
        printf("n is'nt prime number.");
    }
}