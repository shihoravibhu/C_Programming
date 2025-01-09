#include <stdio.h>

void main()
{

    int a, lastdigit;

    printf("enter no. a : ");
    scanf("%d", &a);

    lastdigit = a % 10;

    if (lastdigit % 2 == 0)
    {
        printf("'%d' is even", lastdigit);
    }
    else if (lastdigit % 2 != 0)
    {
        printf("'%d' is odd", lastdigit);
    }

    // OR
    //  if (lastdigit % 2 ==0){
    //      printf("'%d' is even " , lastdigit);
    //  }
    //  else {
    //      printf("'%d' is odd " , lastdigit);
}