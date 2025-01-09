#include <stdio.h>

void main()
{

    int a, b, c;

    printf("enter a,b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a > b && a > c)
    {

    case 1:
        printf("a is largest no. \n");

        break;
    }
    switch (b > a && b > c)
    {

    case 1:
        printf("b is largest no. \n");

        break;
    }
    switch (c > a && c > b)
    {

    case 1:
        printf("c is largest no. \n");

        break;
    }
}

//                            OR

// by tarnary opretar pan thai sake