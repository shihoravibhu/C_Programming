#include<stdio.h>

void main (){

    FILE *fp ;

    fp = fopen("a1.txt","r");

    fclose(fp);
}