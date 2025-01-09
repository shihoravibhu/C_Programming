#include<stdio.h>

struct book {

    char name[100];
    char author[100];
    char publication[100];
    int price;

};

void main(){

    struct book b[3];

    for(int i = 0 ; i < 3 ; i++){

    printf("enter detail of book no. %d\n",i+1);

    printf("enter book name : \n");
    scanf("%s",b[i].name); 

    printf("enter book author : \n");
    scanf("%s",b[i].author);

    printf("enter publication : \n");
    scanf("%s",b[i].publication);

    printf("enter price : \n");
    scanf("%d",&b[i].price);

    }

    //for printing 

     for(int j = 0 ; j < 3 ; j++){

        printf("detail of book no. %d\n",j+1);

        printf("name : %s\n",b[j].name);
        printf("author : %s\n",b[j].author);
        printf("publication : %s\n",b[j].publication);
        printf("price : %d",b[j].price);
     } 
}