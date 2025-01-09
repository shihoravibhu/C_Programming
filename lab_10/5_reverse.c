#include <stdio.h>

void main()
{

    int n , rem;

    printf("enter no. n : ");
    scanf("%d", &n);

    printf("reverse :");
    while(n!=0){
        rem = n % 10;
        printf("%d" , rem);
        n=n/10;
    }
    

}