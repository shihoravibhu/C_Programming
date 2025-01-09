#include<stdio.h>

void main () {

    int n , k = 0;

    printf("enter elements n : ");
    scanf("%d" ,&n);

    int a[n] ;

    for(int i = 0 ; i < n ; i++){

        printf("enter element a[%d] :",i);
        scanf("%d",&a[i]);
    } 

    for(int i = 0 ; i < n ; i++){

        if(i==0 || a[i]!=a[i+1]){
            a[k]=a[i];
            k++;
        }
    }

    for(int i = 1 ; i < k ; i++){

        printf("%d " , a[i]);
    }


}

