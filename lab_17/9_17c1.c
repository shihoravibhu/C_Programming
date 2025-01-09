#include<stdio.h>

void main (){

    char str[100] , lenth = 0 ;  

    char *p = str ;  

    printf("enter string : ");
    gets(str);

    while (*p!='\0'){

        lenth ++ ;

        *p ++ ;

    }

    printf("lenth of the string : %d",lenth);

      



}