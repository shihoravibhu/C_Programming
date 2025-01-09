#include <stdio.h>

int main()
{

    FILE *firstf, *secondf;

    char ch , firstfile_name[100], secondfile_name[100] ;

    printf("enter a source file name :\n");
    scanf("%s", firstfile_name);

    printf("enter a destination file name :\n");
    scanf("%s", secondfile_name);

    firstf = fopen(firstfile_name, "r");

    if (firstf == NULL)
    {
        printf("error file opening or writing");

        return 1;
    }

    secondf = fopen(secondfile_name, "w");

    if (secondf == NULL)
    {
        printf("error file opening or writing");

        fclose(firstf);

        return 1;
    }

    while ((ch = fgetc(firstf)) != EOF)
    {

        fputc(ch,secondf);
    }

    fclose(firstf);
    fclose(secondf);

    return 0 ;
}