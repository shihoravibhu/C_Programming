#include <stdio.h>

void main()
{

    int sum = 0, n, i;
    float avg;
    char ch;

    while (1)
    {   
        printf("enter y or n :");
        scanf("%c", &ch);

        if (ch == 'y')
        {
            printf("\nenter no. n : ");
            scanf("%d", &n);
            sum += n;
            i++;
            continue;
        }
        else if (ch == 'n')
        {
            break;
        }
        
    }
    avg = (float)sum / i;

    printf("%f", avg);
}