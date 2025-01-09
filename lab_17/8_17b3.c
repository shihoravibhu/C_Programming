#include <stdio.h> 
 
int main() { 
    int rows, cols, i, j; 
 
    printf("Enter the number of rows and columns of the matrices: "); 
    scanf("%d %d", &rows, &cols);

    int a[rows][cols] ;
    int b[rows][cols] ; 

    for(int i = 0 ; i < rows ; i ++){
        for(int j = 0 ; j < cols ; j++){

            printf("enter element a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0 ; i < rows ; i ++){
        for(int j = 0 ; j < cols ; j++){

            printf("enter element b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    int *a_ptr = (int *) a;
    int *b_ptr = (int *) b;
    

    for(int i = 0 ; i < rows ; i ++){
        for(int j = 0 ; j < cols ; j++){

           // printf("%d ",*(*(a_ptr + i)+j) + *(*(b_ptr + i)+j) );
           printf("%d",*(a_ptr +i+j)+ *(b_ptr+i+j)) ;
            
        }
        printf("\n");
    }



}