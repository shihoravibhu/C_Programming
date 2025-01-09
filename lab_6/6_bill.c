#include <stdio.h>

void main () {
     float total_rs, units, final_bill;

     printf("enter electricity units : ");
     scanf("%f" , &units);

     if (units <= 50){
        total_rs = units * 0.50 ;
     }
     else if (units <= 150){
        total_rs = 25 + ((units - 50) * 0.75) ;
     }
     else if (units <= 250){
        total_rs = 75 + 25 + ((units-150) * 1.20);
     }
     else {                                       //OR else if(units > 250)
        total_rs = 120 + 75 + 25 + ((units-250) * 1.50);
     }

    final_bill = total_rs + (total_rs * 0.2);                  // o.2 is additional charge 

    printf("'%.2f' is final_bill " , final_bill);
}