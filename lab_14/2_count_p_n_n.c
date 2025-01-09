#include<stdio.h>

void main (){

    int n , countp=0 ,countn=0 ;

    printf("enter n :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);
    }

    for(int i = 0 ; i < n ; i++){

        if (a[i]>0)
        {
            countp++;
        }
        else
        {
            countn++;
        }
        
        
    }
    printf("total positive no. : %d\n",countp);
    printf("total negative no. : %d\n",countn);
}