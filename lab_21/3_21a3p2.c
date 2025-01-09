#include <stdio.h>

// Define a union
union ExampleUnion
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    union ExampleUnion example;

    // Assign and print values one at a time
    example.intValue = 10;
    printf("Union value (intValue): %d\n", example.intValue);

    example.floatValue = 20.5;
    printf("Union value (floatValue): %.2f\n", example.floatValue);

    example.charValue = 'A';
    printf("Union value (charValue): %c\n", example.charValue);

    // Notice that only the last assigned value is valid
    printf("After assigning charValue:\n");
    printf("intValue: %d\n", example.intValue);       // May give incorrect value
    printf("floatValue: %.2f\n", example.floatValue); // May give incorrect value
    printf("charValue: %c\n", example.charValue);

    return 0;
}
