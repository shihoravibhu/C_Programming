#include<stdio.h>

void main (){

    int n , temp  ;
    

    printf("enter number of element n :");
    scanf("%d",&n);

    int a[n] ;

    for(int i = 0 ; i < n ; i++){

        printf("enter num a[%d] : ",i);
        scanf("%d" ,&a[i]);

    }
     
    for(int i = 0 ; i < n - 1; i++){            //  array na asseding / disssendimg matee yaad rakhvu

        for(int j=0;j < n - i - 1 ; j++){

            if(a[j]>a[j+1]){

                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }            

        }

    }
     printf("assending oder elemente of array :\n");

    for(int i = 0 ; i < n ; i++){

        printf("%d ",a[i]);
}
}