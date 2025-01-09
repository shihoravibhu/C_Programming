#include <stdio.h>

// Define a structure
struct ExampleStruct
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    struct ExampleStruct example;

    // Assign values to structure members
    example.intValue = 10;
    example.floatValue = 20.5;
    example.charValue = 'A';

    // Print structure members
    printf("Structure values:\n");
    printf("intValue: %d\n", example.intValue);
    printf("floatValue: %.2f\n", example.floatValue);
    printf("charValue: %c\n", example.charValue);

    return 0;
}
