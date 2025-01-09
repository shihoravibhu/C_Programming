#include<stdio.h>

void main (){

    char ch ;

    printf("enter ch : ");
    scanf("%c" , &ch);

    ('A'<= ch && 'Z'>=ch || 'a'<=ch && 'z' >=ch)?printf("alphabet\n"):printf("not alphabet\n");
}