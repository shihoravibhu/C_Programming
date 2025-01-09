#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void main() {

    struct Student *Ptr;
    Ptr = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter student's name: ");
    scanf("%s", Ptr->name);

    printf("Enter student's age: ");
    scanf("%d", &Ptr->age);

    printf("Enter student's marks: ");
    scanf("%f", &Ptr->marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", Ptr->name);
    printf("Age: %d\n", Ptr->age);
    printf("Marks: %.2f\n", Ptr->marks);
    free(Ptr);
    printf("\nmemoery is free");
}