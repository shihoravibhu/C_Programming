#include <stdio.h>

void main()
{

    char ch;

    printf("enter ch (1-7) : ");
    scanf("%c", &ch);

    switch (ch)
    {

    case '1':
        printf("monday");
        break;
    case '2':
        printf("thuesday");
        break;
    case '3':
        printf("wednesday");
        break;
    case '4':
        printf("thursday");
        break;
    case '5':
        printf("friday");
        break;
    case '6':
        printf("saturday");
        break;
    case '7':
        printf("sunday");
        break;
    default:
        printf("enter valid no.");
    }
}