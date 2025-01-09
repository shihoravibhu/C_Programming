#include<stdio.h>
#include<math.h>

void main () {
    int number = 0 ;

    printf("Number and its square root from 0 to 9:\n");

    while(number<=9){

        printf("%d->%.2f\n",number,sqrt(number));

        number++;
    }
}