#include<stdio.h>

void main (){

    int n , count=0;

    printf("enter number of element  :");
    scanf("%d",&n);

    int height[n] , weight[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num height[%d] (cm): ",i);
        scanf("%d" ,&height[i]);

        printf("enter num weight[%d] (kg) : ",i);
        scanf("%d" ,&weight[i]);
    }

    for(int i = 0 ; i < n ; i++){

        if(height[i] > 170 && weight[i] < 50){

            count++;
        }
    }

    printf("%d",count);



}