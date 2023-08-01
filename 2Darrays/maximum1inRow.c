//Given a matrix having 0-1 only, find the row with the maximum number of 1's.
#include<stdio.h>
#include<limits.h>
int main()
{
    int r;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the no. of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the 2D matrix of %d rows & %d columns with 0 and 1 elements : \n",r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxCount = INT_MIN;
    int row_no;
    for (int i = 0; i < r; i++)
    {
        int count = 0; //sum variable declared inside the first loop bcz sum has to be initialized by 0 for the next row --> it stores the sum of each rown one by one
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(maxCount < count){
            maxCount = count; //maxCount stores the sum of the row if sum of the current row is greater the sum of the previous row
            row_no = i; // row_no stores the index of row which have maximum sum
        }
    }
    printf("the row no. having the maximum no. of 1's is : Row no. - %d and the no. of 1's in this row is %d", row_no+1 ,maxCount);
    return 0 ;
}
