#include<stdio.h>

void main () {

    int n , pos , newvalue;

    printf("enter total no. of elements n : ");
    scanf("%d" ,&n);

    int a[n+1];

       for(int i = 0 ; i < n ; i++){

        printf("enter sorted element a[%d] :",i);
        scanf("%d",&a[i]);

    } 
   printf("insert new value : ");
   scanf("%d" , &newvalue);

   
   for(pos=0;pos<n;pos++){   // find correct position

   if(a[pos]>newvalue){
    break;
   }
   }

   for(int i=n;i>pos;i--){    // move element to make space for new value 
    a[i]=a[i-1];    
   }

   // insert the new value 

   a[pos]=newvalue ;

   for(int i=0;i<=n;i++){    // print new sorted array 

    printf("%d ", a[i] );

   }

}