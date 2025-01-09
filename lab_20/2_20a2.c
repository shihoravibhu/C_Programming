#include<stdio.h>

void main (){

    char str[100] , str2[100] ;
    int j = 0 ;

    printf("enter string : ");
    gets(str);

    char *p = str ;
    char *p2 = str2 ;

    for(int i = 0 ; *(p+i)!='\0';i++){

        if((32 <= *(p+i) && *(p+i) <= 47 ) || (58 <= *(p+i) && *(p+i) <= 64 ) || (91 <= *(p+i) && *(p+i) <= 96 ) || (123 <= *(p+i) && *(p+i) <= 126 )){

           continue; 
        }
        else {

            *(p2 + j) = *(p + i);

            j++;

        }
    }
    *(p2+j)='\0';

    for(int i = 0 ; *(p2+i)!='\0';i++){

        printf("%c",*(p2 + i));

    }

}