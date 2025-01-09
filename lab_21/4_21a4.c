#include<stdio.h>

struct student {

    char name[100];
    float percentage;
    int age;

};

void main(){

    struct student s[5];

    for(int i = 0 ; i < 5 ; i++){

    printf("enter detail of student no. %d\n",i+1);

    printf("enter student name : \n");
    scanf("%s",s[i].name); 

    printf("enter student percentage : \n");
    scanf("%f",&s[i].percentage);

    printf("enter stuednt age : \n");
    scanf("%d",&s[i].age);

    }
    printf("\n");

    //for printing 

     for(int j = 0 ; j < 5 ; j++){

        printf("detail of student no. %d\n",j+1);

        printf("name : %s\n",s[j].name);
        printf("pecentage : %f\n",s[j].percentage);
        printf("age : %d\n",s[j].age);
        printf("\n");
     } 
}