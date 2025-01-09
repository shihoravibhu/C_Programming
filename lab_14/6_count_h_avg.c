#include<stdio.h>

void main (){

    int n , sum=0 , count=0;
    float avg=0 ;

    printf("enter number of element n :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);

    }
    for(int i = 0 ; i < n ; i++){

        sum+=a[i];
        
    }
   
   avg = (float) sum / n;

   for(int i = 0 ; i < n ; i++){

    if(avg<a[i]) {count++;}
   }

   printf("numbers higher than the average : %d\n",count);



}