#include<stdio.h>

void main (){

    int r , c ;

    printf("enter rows and collums : ");
    scanf("%d %d",&r ,&c);

    int a[r][c] , b[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            printf("enter element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            printf("enter element b[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            printf("%d ",a[i][j]+b[i][j]);


        }
        printf("\n");

}

}