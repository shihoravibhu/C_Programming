#include<stdio.h>

void main (){

    FILE *fp ;

    fp = fopen("a4.txt","a");

    fputc('H',fp);  //fprinf(fp,"HELLO")
    fputc('E',fp);
    fputc('L',fp);
    fputc('L',fp);
    fputc('O',fp);

    fclose(fp);
}