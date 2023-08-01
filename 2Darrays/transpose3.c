//WAP a program to change the given (nxn) matrix to its transpose without using another matrix
#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the (%dx%d) matrix : \n",n,n);

    //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) //to transpose the matrix - (j goes from i to n-1) OR (j goes from 0 to i)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    //output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0 ;
}
