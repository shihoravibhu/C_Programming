#include<stdio.h>

void main (){
    int i , a[32] , b[32] , n ,rem;

    printf("enter n :");
    scanf("%d", &n);

    for(i=0;i<32;i++){
        a[i]=0;
    }
    for(i=0;n!=0;i++){

        rem=n%2;
        a[i]=rem;
        n=n/2;

    }
    for(i=31;i>=0;i--){
        printf("%d",a[i]);
    }


}