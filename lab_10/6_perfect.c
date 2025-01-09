// perfect number = sum of factor (< n) is = n 

#include <stdio.h>

void main()
{

    int n ,  sum=0 , i=1;

    printf("enter no. n : ");
    scanf("%d", &n);

    while (i<n){

        if(n%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==n){
        printf("n is perfect no.");
    }
    else {
        printf("n is not perfect no.");
    }


}