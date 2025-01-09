#include<stdio.h>

void main (){

    int n , flag = 0 , m;

    printf("enter elements n : ");
    scanf("%d" ,&n);

    int a[n] ;

    for(int i = 0 ; i < n ; i++){

        printf("enter element a[%d] :",i);
        scanf("%d",&a[i]);
    }

    printf("enter search element");
    scanf("%d",&m);

    for(int i = 0 ; i < n ; i++){

        if(a[i]==m){
            flag = 1 ;
        }
    
    } 

    if(flag==1){
        printf("%d is avalaible in array.",m);  
    }

    
}