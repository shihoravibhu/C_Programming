#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;

    printf("Enter the marks of five subjects: ");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500.0) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage < 35) {
        printf("Class: Fail\n");
    } else if (percentage >= 36 && percentage <= 45) {
        printf("Class: Pass Class\n");
    } else if (percentage >= 46 && percentage <= 60) {
        printf("Class: Second Class\n");
    } else if (percentage >= 61 && percentage <= 70) {
        printf("Class: First Class\n");
    } else {
        printf("Class: Distinction\n");
    }

    return 0;
}
