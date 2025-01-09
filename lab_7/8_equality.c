#include <stdio.h>

int main()
{
    int x, y;

    printf("enter x and y : ");
    scanf("%d %d", &x, &y);

    (x ^ y) ? printf("x is not equal to y") : printf("x is equal to y");   

    return 0;
}
// meaning => x^y = bitwise XOR ahii bey no.  same hase to 0(zero) ave baki non zero ans avee
