#include <stdio.h>

void main() {
    int n, binaryNum = 0, remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 2;
        binaryNum += remainder * place;
        n /= 2;
        place *= 10;
    }

    printf("Binary number: %d\n", binaryNum);

}