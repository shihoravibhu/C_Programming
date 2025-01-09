#include<stdio.h>

void main () {

    int days,week,year ;

    printf("enter days : ");
    scanf("%d" , &days);

    year=(days/365);
    week=(days - (year*365))/7 ;
    days=(days - (year*365) - (week*7));

    printf("%d\n" , year);
    printf("%d\n" , week);
    printf("%d\n" , days);

}