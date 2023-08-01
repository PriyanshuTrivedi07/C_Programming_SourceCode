// program to find the sum of all elements of a given 2d matrix
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
    printf("Enter the 2D matrix of %d rows & %d columns : \n",r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("the sum of elements is %d",sum);
    return 0;
}
