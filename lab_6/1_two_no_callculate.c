#include <stdio.h>

void main()
{

    int a,b;
    char choice;

    printf("enter no. a,b : ");
    scanf("%d %d", &a, &b);
    scanf("%c", &choice);
    printf("enter choice +,-,* or / : ");
    scanf("%c", &choice);

    if (choice == '+')
    {
        printf("%d" , a+b);
    }

    else if (choice == '-')
    {
        printf("%d" ,a-b);
    }

    else if (choice == '*')
    {
        printf("%d" , a*b);
    }

    else if (choice == '/')
    {
        printf("%d",a/b);
    }
    else
    {
        printf("invalid");
    }
    
}