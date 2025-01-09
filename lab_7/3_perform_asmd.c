#include<stdio.h>

void main () {

    char ch ;
    float a , b ;

    printf("enter a and b : ");
    scanf("%f %f" , &a , &b);

    scanf("%c" , &ch);
    printf("enter ch (+ or - or * or /): ");
    scanf("%c" , &ch);

    switch (ch) {
        case '+' : printf("%f\n" , (a+b));
        break;
        case '-' : printf("%f\n" , (a-b));
        break;
        case '*' : printf("%f\n" , (a*b));
        break;
        case '/' : printf("%f\n" , (a/b));
        break;
        default : printf("invalid input ! enter valid input \n");

         
    }


}