#include <stdio.h>

void main()
{

    int a = 1, *int_ptr;
    int_ptr = &a;

    float b = 1.0, *float_ptr;
    float_ptr = &b;

    double c = 2.0, *double_ptr;
    double_ptr = &c;

    char d = 'A', *char_ptr;
    char_ptr = &d;

    // for int
    printf("value of a : %d\n", a);
    printf("address of a : %d\n", int_ptr);
    printf("Value at address stored in int_ptr : %d\n", *int_ptr);

    // for float
    printf("value of b : %f\n", b);
    printf("address of b : %d\n", float_ptr);
    printf("Value at address stored in float_ptr : %f\n", *float_ptr);

    // for double
    printf("value of c : %lf\n", c);
    printf("address of c : %d\n", double_ptr);
    printf("Value at address stored in double_ptr : %lf\n", *double_ptr);

    // for char
    printf("value of d : %c\n", d);
    printf("address of d : %d\n", char_ptr);
    printf("Value at address stored in char_ptr : %c\n", *char_ptr);
}