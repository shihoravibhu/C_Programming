#include <stdio.h>

void main()
{

    int number, i = 1, oddcount = 0, evencount = 0;

    printf("enter 10 numbers : ");
    // OR        scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

    while (i <= 10)
    {

        scanf("%d", &number);

        if (number % 2 == 0)
        {
            evencount = evencount + 1;
        }
        else {
            oddcount++;
            
        }
        i++;
    }
    printf("evencount=%d\n",evencount);
    printf("oddcount=%d\n",oddcount);

}