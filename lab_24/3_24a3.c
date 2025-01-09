#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i, sum = 0;
    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);  
    int *intPtr = (int *)calloc(n , sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &intPtr[i]);  
    }
    for (i = 0; i < n; i++) {
        sum = sum + intPtr[i];  
    }
    printf("The sum is: %d\n", sum);
    free(intPtr);
     printf("\nmemoery is free");
}