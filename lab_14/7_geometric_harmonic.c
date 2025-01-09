#include<stdio.h>
#include<math.h>

void main (){

    int n , sum=0 , count=0  ;
    float avg=0 , sum1=0 ,geo=1 ,ha=1;

    printf("enter number of element n :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);

}

for(int i = 0 ; i < n ; i++){

        sum+=a[i];
        sum1+=(float)1/a[i] ;
        geo=geo * a[i];
        
    }
   
   avg = (float) sum / n;
   
   ha=(float)n/sum1 ;

   printf("avg : %f\n",avg);
   printf("geometric mean : %f\n",pow(geo,1.0/n));
   printf("harmonic mean : %f\n",ha);



}