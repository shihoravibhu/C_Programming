// not most imp concept khbr hovi joie
#include<stdio.h>
#include<string.h>

struct amployee {

    char name[100] ;    
    int id ;
    float salary ;
};

void main (){

    struct amployee emp1={"abc",99,80000.00};

    struct amployee *emp1ptr ;

    emp1ptr = &emp1 ;

    printf("%s\n",emp1ptr->name);  // pinter ne jyare structer ma use karvama ave che 
                                //tyare . karine struct ma rahela variable lakhta 
                                //jyare pinter mate -> katine enu (variable) nu name lakhvu

    printf("%d\n",emp1ptr->id);

    printf("%f\n",emp1ptr->salary);
    

    


}