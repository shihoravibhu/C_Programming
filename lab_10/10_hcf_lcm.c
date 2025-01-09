#include <stdio.h>

void main()
{

    int num1 , num2 , a ,b , hcf , lcm;

    printf("enter no. num1 and num2: ");
    scanf("%d %d", &num1 , &num2);

    a=num1;
    b=num2;

    while(b!=0){
         int rem = a % b ;
         a = b ;
         b = rem ;

    
}
hcf = a ; 
lcm = num1 * num2 / hcf ; 

printf("HCF = %d\n",hcf);
printf("LCM = %d\n",lcm);
}