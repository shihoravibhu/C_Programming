#include <stdio.h>
int main() {
   int year,month,days,flag=0;
   printf("Enter a year: ");
   scanf("%d", &year);

   printf("Enter a month: ");
   scanf("%d", &month);

   if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ){
      flag=1;
   }

   switch(month) {

      case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
      days = 31;
      break;

      case 4 : case 6 : case 9 : case 11 : 
      days = 30;
      break;

      case 2 :
      days=(flag==1)? 29 : 28 ;
      break;

      default:
      printf("invalid input\n");


      
   }
   printf("no. of days =%d",days);

   
   

   return 0;
}