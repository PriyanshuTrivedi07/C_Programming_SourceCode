//WAP to print the row number having the maximum sum in a given matrix.
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
    printf("Enter the 2D matrix of %d rows & %d columns : \n",r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxSum = INT_MIN;
    int row_no;
    for (int i = 0; i < r; i++)
    {
        int sum = 0; //sum variable declared inside the first loop bcz sum has to be initialized by 0 for the next row --> it stores the sum of each rown one by one
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if(maxSum < sum){
            maxSum = sum; //maxSum stores the sum of the row if sum of the current row is greater the sum of the previous row
            row_no = i; // row_no stores the index of row which have maximum sum
        }
    }
    printf("the row no. which having the maximum sum is %d and the Sum of this row is %d", row_no+1 ,maxSum);
    return 0 ;
}
