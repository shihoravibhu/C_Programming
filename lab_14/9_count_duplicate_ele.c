#include<stdio.h>

void main (){

    int n , count = 0;
   
    printf("enter number of element n :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){

            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }

    printf("%d",count);
}