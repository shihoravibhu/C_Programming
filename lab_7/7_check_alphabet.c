#include<stdio.h>

void main(){

    char ch ;

    printf("enter ch : ");
    scanf("%c" , &ch);

    switch('A'<= ch && 'Z'>=ch || 'a'<=ch && 'z' >=ch){

        case 1 : printf("alphabet\n");
        break;
        default : printf("not alphabet\n");
    }
}