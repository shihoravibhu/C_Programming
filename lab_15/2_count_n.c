#include<stdio.h>

void main (){

    int n , count = 0;

    printf("enter elements n : ");
    scanf("%d" ,&n);

    int a[n] ;

    for(int i = 0 ; i < n ; i++){

        printf("enter element a[%d] :",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < n ; i++){

        if(a[i]<0){
            count++;
        }
    } 

    printf("total no. of negative element %d :\n",count);

    
}