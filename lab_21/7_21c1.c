#include<stdio.h>

struct Distance {

    int inches ;
    int feets ;

};

void main (){

    struct Distance d1 ,d2 , result ;

    printf("enter feets : ");
    scanf("%d",&d1.feets);

    printf("enter inches : ");
    scanf("%d",&d1.inches);

    printf("enter feets : ");
    scanf("%d",&d2.feets);

    printf("enter inches : ");
    scanf("%d",&d2.inches);

    int result_inches = d1.inches + d2.inches ;
    int result_feets = d1.feets + d2.feets ;

    if(result_inches >= 12){

        result_feets += (int)result_inches/12 ;
        result_inches = (int)result_inches%12 ;
      }

      printf("\n feets : %d",result_feets);
      printf("\n inches : %d",result_inches);
}