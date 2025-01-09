#include<stdio.h>

void main (){

    int n , count_o=0 ,count_e=0 ;

    printf("enter n :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);
    }

    for(int i = 0 ; i < n ; i++){

        if (a[i]%2!=0)
        {
            count_o++;
        }
        else
        {
            count_e++;
        }
        
        
    }
    printf("total positive no. : %d\n",count_o);
    printf("total negative no. : %d\n",count_e);
}