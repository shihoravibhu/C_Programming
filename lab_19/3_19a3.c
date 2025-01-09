#include<stdio.h>
#include<string.h>

void main (){

    char str1[] = "Heyy" , str2[] = "Hello" ;

    printf("%d\n",strlen(str1));

    printf("%d\n",strcmp(str1,str2));

    printf("%s\n",strcpy(str1,str2));

    printf("%s\n",strcat(str1,str2));

    printf("%s\n",strrev(str1));

    printf("%s\n",strlwr(str1));

    printf("%s\n",strupr(str2));
}