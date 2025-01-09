// 1
// A B
// 1 2 3
// C D E F 
// 1 2 3 4 5

#include<stdio.h>

void main (){

    int k = 65 ;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            else {
                
                printf ("%c " ,k++);
            }
        }
        printf("\n");
    }
}
