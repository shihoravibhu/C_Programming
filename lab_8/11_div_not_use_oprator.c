#include <stdio.h>

void main() {
    int a,b,rem,q=0,t;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    t=a;

    while(a>=b){
        a=a-b;
        q++;
    }
    rem=t-(q*b);

    printf("%d %d ",q,rem);


    
}
