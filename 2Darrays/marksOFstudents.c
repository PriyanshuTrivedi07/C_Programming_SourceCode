//WAP to store roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
 
int main()
{
    int r;
    printf("Enter the no. of student : ");
    scanf("%d",&r);
    int marks[r][2];
    for(int i=0;i<r;i++){
        printf("Enter the Roll no. , Marks of student %d and hit ENTER : ", i+1);
        for(int j=0;j<2; j++){
            scanf("%d",&marks[i][j]);
        }
    }
    printf("Data in Tabular form : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<2; j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}



