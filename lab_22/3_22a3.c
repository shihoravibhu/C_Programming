#include <stdio.h>

// Use fprintf() to write formatted data to a file.

// Use fscanf() to read formatted data from a file.

// Use fputc() to write characters to a file.

// Use fgetc() to read characters from a file.

// Use fseek() to move the file pointer to a specific location.

// Use rewind() to move the file pointer to the beginning of the file.

int main()
{

    FILE *fp;
    char ch;

    // fprintf

    fp = fopen("a3.txt", "w");

    if (fp == NULL)
    {

        printf("error file opening or writing");

        return 1 ;
    }

    fprintf(fp, "hello");

    fclose(fp);

    //fgetc

    fp = fopen("a3.txt", "r");

    if (fp == NULL)
    {

        printf("error file opening or writing");

        return 1 ;
    }

    ch=fgetc(fp);
    
    putchar(ch);    

    fclose(fp);

    //fputc 

    fp = fopen("a3.txt", "a");

    if (fp == NULL)
    {

        printf("error file opening or writing");

        return 1 ;
    }

    fputc('A',fp);
    fputc('B',fp);
    fputc('C',fp);    

    fclose(fp);

    //fseek

    fp = fopen("a3.txt", "r");

    if (fp == NULL)
    {

        printf("error file opening or writing");

        return 1 ;
    }

    fseek(fp,0,SEEK_SET); // Move to the beginning of the file

    while((ch=fgetc(fp))!=EOF){

        putchar(ch);
    }

    fclose(fp);

    //frewind

    fp = fopen("a3.txt", "r");

    if (fp == NULL)
    {

        printf("error file opening or writing");

        return 1 ;
    }

    rewind(fp);

    while((ch=fgetc(fp))!=EOF){

        putchar(ch);
    }

    fclose(fp);

    return 0 ;


}
