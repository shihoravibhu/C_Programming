#include<stdio.h>

void main (){

    int r , c , countp=0,countn=0,countz=0 ;

    printf("enter rows and collums : ");
    scanf("%d %d",&r ,&c);

    int a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            printf("enter element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            if(a[i][j]>0){
                countp++;
            } 
            else if(a[i][j]<0){
                countn++;
            }
            else{
                countz++;
            }        
            
        }
        
    }
    printf("positive no : %d\n",countp);
    printf("negative no : %d\n",countn);
    printf("zero no : %d\n",countz);
}