#include <stdio.h>

void main()
{

    int a = 5;
    int *p;

    p = &a;
    
    printf("value of a : %d",a);
    printf("address of variable a : %d\n", p);
    printf("value of variable a : %d\n", *p);
}