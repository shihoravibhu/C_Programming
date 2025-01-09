#include <stdio.h>

void main() {
    int num1, num2, product = 0,i;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while(i<num2){
        product=product+num1;
        i++;
    }

    printf("Product = %d\n", product);

}