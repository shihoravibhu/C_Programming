#include <stdio.h>

void main()
{
    int month;

    printf("enter month (1-12) : ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        printf("31 days\n");

        break;

    case 4:
    case 6:
    case 9:
    case 11:

        printf("30 days\n");

        break;

    case 2:
        printf("28/29 days\n");

        break;

    default:
        printf("invalid input ! please enter month between  ( 1 to 12 )");
    }
}

//                                               OR

// #include <stdio.h>

// void main()
// {

//     int a;

//     printf("enter month (1-12) :");
//     scanf("%d", &a);

//     switch (a)
//     {

//     case 1:
//         printf("days = 31");
//         break;
//     case 2:
//         printf("days = 28");
//         break;
//     case 3:
//         printf("days = 31");
//         break;
//     case 4:
//         printf("days = 30");
//         break;
//     case 5:
//         printf("days = 31");
//         break;
//     case 6:
//         printf("days = 30");
//         break;
//     case 7:
//         printf("days = 31");
//         break;
//     case 8:
//         printf("days = 31");
//         break;
//     case 9:
//         printf("days = 30");
//         break;
//     case 10:
//         printf("days = 31");
//         break;
//     case 11:
//         printf("days = 30");
//         break;
//     case 12:
//         printf("days = 31");
//         break;
//     default:
//         printf("enter valid no.");
//     }
//
//}
