#include<stdio.h>
 
int main()
{
    int r;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the no. of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the 2D matrix of %d rows & %d columns : \n",r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Transpose matrix of given matrix : ");
    printf("\n");
    for(int i=0;i<c; i++){
        for(int j=0;j<r; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0 ;
}
