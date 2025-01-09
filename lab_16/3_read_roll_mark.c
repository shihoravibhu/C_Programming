#include<stdio.h>

void main () {

    int a[20][2];

    for(int i=0;i<20;i++){
        for(int j=0;j<2;j++){

       printf("enter the roll number: ");
       scanf("%d",&a[i][j]);    

       printf("enter the marks: ");
       scanf ("%d",&a[i][j]);
       
        }
    }
}