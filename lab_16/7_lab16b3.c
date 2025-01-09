#include <stdio.h>

int main()
{
   int i = 0, j = 0, sum = 0;
   int a[3][3];
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("enter the elements of array a[%d][%d] : ", i, j);
         scanf("%d", &a[i][j]);
      }
   }
   printf("the diagonal elements are: ");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         if (i == j)
         {
            printf("%d", a[i][j]);
            sum += a[i][j];
         }
      }
   }

   printf("\nthe sum of diagoal elements is: %d", sum);
}
