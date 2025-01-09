#include <stdio.h>

void main()
{

    FILE *fp;

    fp = fopen("a2.txt", "r");

    if (fp == NULL)
    {
        printf("File opening error\n");
        
    }

        int ch = 0, sp = 0, tb = 0, nl = 0;
        char a;

        a = fgetc(fp);

        while (a != EOF)
        {

            if (a == ' ')
            {

                sp++;
            }
            else if (a == '\t')
            {

                tb++;
            }
            else if (a == '\n')
            {

                nl++;
            }
            else
            {
                ch++;
            }
            a = fgetc(fp);
        }
        printf("characters : %d\n", ch);
        printf("Spaces: %d\n", sp);
        printf("Tabs: %d\n", tb);
        printf("New Lines: %d\n",nl);

        fclose(fp);
    }