//nested structure

#include<stdio.h>
#include<string.h>

struct Bdate {

    int day ;
    int month ;
    int year ;

};

struct Student {

    char name[100];
    int rollno ;
    struct Bdate b ;
};

void main (){

    struct Student s1 ;

    scanf("%d",&s1.b.day);
    scanf("%d",&s1.b.month);
    scanf("%d",&s1.b.year);

    printf("\n");

    printf("%d\n",s1.b.day);
    printf("%d\n",s1.b.month);
    printf("%d\n",s1.b.year);
}