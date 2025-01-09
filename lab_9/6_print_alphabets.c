#include <stdio.h>

void main()
{
    char ch = 'a', CH = 'A';
    int i;

    while (ch <= 'z')
    {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    while (CH <= 'Z')
    {

        printf("%c ", CH);
        CH++;
    }
}