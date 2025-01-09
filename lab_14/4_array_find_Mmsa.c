#include<stdio.h>

void main (){

    int n , sum=0 , max ,min ;
    float avg=0 ;

    printf("enter number of element n :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);
    }
    //  for sum , max , min 

    max=a[0] , min=a[0] ;

    for(int i = 0 ; i < n ; i++){

        if(a[i]>max) {max = a[i];}
        if(a[i]<min) {min = a[i];}

        sum+=a[i];
        
        
    }
   

   avg = (float) sum / n;

   printf("sum : %d \n avg : %f \n ",sum,avg);

   printf("max : %d \n min : %d \n ",max,min);

   
   


}