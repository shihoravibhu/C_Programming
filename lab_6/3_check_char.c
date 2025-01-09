#include <stdio.h>

void main () {

    char ch ;

    printf("enter any character ch : ");
    scanf("%c" , &ch);

    if (ch>='A' && ch<='Z'){
        printf("'%c' is upper chase : \n" , ch);
    }
    else if (ch>='a' && ch<='z'){
        printf("'%c' is lower chase : \n" , ch);
    }
    else if (ch>='1' && ch<='9'){
        printf("'%c' is digit : \n" , ch);
    }
    else {
        printf("'%c' is special character : " , ch);
    }


}