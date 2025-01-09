#include<stdio.h>
#include<string.h>

void main (){

    char str[100] ;

    printf("enter string : ");
    gets(str);

    printf("%s",str);

    int n = strlen(str);

    printf("total no of element : %d\n",n);
}