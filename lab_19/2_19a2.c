#include<stdio.h>

void printarr(int b[]);

void main (){

    int a[3]={1,2,3} ;    

    printarr(a);

}

void printarr(int b[]){

    int i ;

    for(int i = 0 ; i < 3 ; i++){

        printf("%d ",b[i]);
    }
}