#include<stdio.h>

char replace(char *s1 , char old_ch , char new_ch );

void main (){

    char s1[100] , old_ch , new_ch ;

    printf("enter string : ");
    gets(s1);

    printf("enter old_ch : ");
    scanf("%c",&old_ch);

    scanf("%c",&new_ch);
    printf("enter new_ch : ");
    scanf("%c",&new_ch);

    replace(s1 ,old_ch,new_ch);

    printf("modifide string : %s",s1);

}

char replace(char *s1 , char old_ch , char new_ch ){

    while(*s1!=0){

        if(*s1==old_ch){

            *s1=new_ch;

        }               
        *s1++;
    }
    

}
