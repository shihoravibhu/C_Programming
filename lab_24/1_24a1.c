#include <stdio.h>
#include <stdlib.h>

int main() {
// int
    int *intPtr = (int *)malloc(sizeof(int));
    *intPtr = 12;
    printf("Integer value: %d\n", *intPtr);
    free(intPtr);

// float
float *floatPtr = (float *)malloc(sizeof(float));
    *floatPtr = 5.75;
    printf("Float value: %.2f\n", *floatPtr);
    free(floatPtr);

// char
char *charPtr = (char *)malloc(sizeof(char));
    *charPtr = 'A';
    printf("Character value: %c\n", *charPtr);
    free(charPtr);
     printf("\n all memoery is free");
}