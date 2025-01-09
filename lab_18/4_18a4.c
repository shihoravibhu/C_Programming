#include<stdio.h>

float cmp (float x , float y , float z);

void main (){

    float a , b , c ; 

    printf("enter a , b and c : ");
    scanf("%f %f %f",&a,&b,&c);

    float res = cmp(a,b,c);

    printf("%f" , res);


}
float cmp (float x , float y , float z){

    float max = (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z)) ;

    return max ;
}