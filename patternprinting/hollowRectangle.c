// * * * * * *
// *         *       <--- if rows = 4 & col = 6 
// *         *
// * * * * * *

#include<stdio.h>
 
int main()
{
    int rows, col;
    printf("Enter the no. of rows : ");
    scanf("%d",&rows);
    printf("Enter the no. of column : ");
    scanf("%d",&col);

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==rows){
                printf("* ");
            }
            else if(j==1 || j==col){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0 ;
}
