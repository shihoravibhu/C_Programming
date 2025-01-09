#include<stdio.h>

float intre(float x , float y , float z) ;

void main () {
    float p,r,t,intrest ;

    printf("enter p,r,t : ");
    scanf("%f %f %f" , &p ,&r ,&t);

    

    float res = intre(p,r,t);

    printf("%f" , res);

}

float intre(float x , float y , float z){

    float intrest = (float) x*y*z*0.01 ;

    return intrest ;


}