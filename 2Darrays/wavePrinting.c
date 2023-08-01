#include <stdio.h>

int main()
{
    int r;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the no. of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the 2D matrix of %d rows & %d columns : \n", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //waveprinting
    int j = 0;
    for(int i=0;i<r;i++){
        if(i%2==0){
            while(j<c){
                printf("%d ", arr[i][j]);
                j++;
            }
        }
        else{
            while(j > 0){
                printf("%d ",arr[i][j-1]);
                j--;
            }
        }
    }
    return 0;
}
