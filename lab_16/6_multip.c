#include<stdio.h>

void main (){

    int n , i = 0 , j = 0 , k = 0;

    printf("enter rows and collums n : ");
    scanf("%d" ,&n);

    int a[n][n] , b[n][n] , res[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            printf("enter element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            printf("enter element b[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
     }
     printf("array a :\n");

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("array b :\n");
     
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            printf("%d ",b[i][j]);
            
        }
        printf("\n");
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            res[i][j]=0 ;

        }
        for(int k=0;k<n;k++){

            res[i][j]+=a[i][k]*b[k][j];
        }


}
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
}
}