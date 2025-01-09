#include <stdio.h>

void main()
{
    int start,end;

    printf("enter two number (start and end) :");
    scanf("%d %d", &start, &end);

    start++;                  // between etle k banne number ni vache no no. matte start ma +1 karel che

    while (start<end)
    {

        if (start % 2 == 0)
        {
            printf("%d\n", start);
        }
        start++;
    }
}