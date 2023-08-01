// given a matrix 'a' of dimension n x m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)
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
    int l1 = 1, r1 = 1, l2 = 2, r2 = 3; //we can also take the value of these variable from user as input
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("the sum is : %d", sum);
    return 0;
}
