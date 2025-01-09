#include<stdio.h>

struct student {

    int rollno ;
    char name[100] ;
    int backlogs ;
};

void writedatainfile();
void readdatafromfileandfindbacklog();

void main (){

    writedatainfile();
    readdatafromfileandfindbacklog();

}
 void writedatainfile(){

    FILE *fp ;

    fp = fopen("a1.txt","w");

    struct student s[3] ;

    for(int i=1 ; i < 3 ;i++){

        printf("Enter details of student %d\n", i + 1);

        printf("enter rollno :\n");
        scanf("%d",&s[i].rollno);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Backlogs: ");
        scanf("%d", &s[i].backlogs);

        fprintf(fp, "%d %s %d\n", s[i].rollno, s[i].name, s[i].backlogs);
        

    }
    fclose(fp);
 }

    void readdatafromfileandfindbacklog() {
        FILE *file = fopen("a1.txt", "r");
        if (file == NULL) {
            printf("Error opening file for reading\n");
            return;
        }
    
        struct student s;
        printf("Students with more than 5 backlogs:\n");
        
        while (fscanf(file, "%d %s %d", &s.rollno, s.name, &s.backlogs) != EOF) {
            if (s.backlogs > 5) {
                printf("Roll Number: %d, Name: %s, Backlogs: %d\n", s.rollno, s.name, s.backlogs);
            }
        }
        
        fclose(file);

   
 }