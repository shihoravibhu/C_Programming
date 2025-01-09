#include <stdio.h>

void main()
{

    int n , max = 0;

    printf("enter number of element n :");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {

        printf("enter num a[%d] : ", i);
        scanf("%d", &a[i]);

        if(a[i]>max) { max = a[i] ;}

    }

    int present[max+1];

    for(int i=0;i<=max;i++){
        present[i]=0;
    }
    for(int i=0 ; i < n ; i++){
        present[a[i]]=1;
    }
    for(int i=1 ; i<=max ; i++){
        if(present[i]==0){
           printf("%d ",i);
        }

    }
      printf("\n");
    
}