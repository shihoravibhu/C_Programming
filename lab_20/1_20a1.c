#include<stdio.h>
#include<string.h>

void main (){

    int palindrom = 1 ;
    char str[100] ;

    printf("enter string : ");
    gets(str);

    int lenth = strlen(str);

    for(int i=0 ; i < lenth / 2 ; i++ ){

       if(str[i] != str[lenth - i - 1]){
        palindrom = 0 ;
        break;
       }
    }

    if(palindrom == 1){

        printf("%s a palindrom no. ",str);

    }
    else {

        printf("%s not a palindrom no. ",str);

    }

    
}
