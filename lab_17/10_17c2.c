#include<stdio.h>

void main (){

    int n ;
    int temp = 0; 

    printf("enter no. of element : ");
    scanf("%d",&n);

    int a[n];

    int *p = a ;

    for(int i = 0 ; i < n ; i++ ){

        printf("enter a[%d] : ",i);
        scanf("%d",(p+i));

    }

    for(int i = 0 ; i < n-1; i++){
        for(int j = i + 1 ; j < n ; j++){

            

            if (*(p+i)>*(p+j)){

            temp = *(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
            }
        }
    }
    printf("Sorted array is:\n"); 

    for(int i=0;i<n;i++){

        printf("%d",*(p+i));
    }




}