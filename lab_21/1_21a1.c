#include<stdio.h>
#include<string.h>

struct amployee {

    char name[100] ;    
    int id ;
    float salary ;
};

void main (){

    struct amployee emp1 , emp2;

    printf("enter name : ");
    scanf("%s",emp1.name);

    printf("enter id : ");
    scanf("%d",&emp1.id);

    printf("enter salary : ");
    scanf("%f",&emp1.salary);

    // for employee 2 mate 

    printf("enter name2 : ");
    scanf("%s",emp2.name);

    printf("enter id2 : ");
    scanf("%d",&emp2.id);

    printf("enter salary2 : ");
    scanf("%f",&emp2.salary);

    //for print karava mate 

    printf("name=%s\n id=%d\n salary=%f\n",emp1.name,emp1.id,emp1.salary);

    printf("name=%s\n id=%d\n salary=%f\n",emp2.name,emp2.id,emp2.salary);



}