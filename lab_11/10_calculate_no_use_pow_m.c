#include <stdio.h>

void main() { 
    int base, result=1 , pow , i ,  temp=0 , j;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter pow : ");
    scanf("%d", &pow);

    for (i = 0 ; i<pow ; i++){
        
        for(j=0;j<result;j++){

        temp+=base;
        }
        result=temp;
    }

    printf("result=%d",result);




}
