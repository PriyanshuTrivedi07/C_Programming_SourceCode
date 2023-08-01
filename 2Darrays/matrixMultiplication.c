// WAP to print the multiplication of two matrices given by the user
#include <stdio.h>

int main()
{
    int m, n; // rows and column of first matrix respectively
    printf("Enter the no. of row & column of first matrix respectively : ");
    scanf("%d %d", &m, &n);

    int p, q; // rows and column of second matrix respectively
    printf("Enter the no. of row & column of second matrix respectively : ");
    scanf("%d %d", &p, &q);

    int arr[m][n]; // declared first 2d array (matrix)
    printf("Enter the first (%dx%d) matrix : \n", m, n);
    // loop for taking first matrix (mxn) as input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int brr[p][q]; // declared second 2d array (matrix)
    printf("Enter the second (%dx%d) matrix : \n", p, q);
    // loop for taking second matrix (pxq) as input
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    // check
    if (n != p)
    {
        printf("The above matrices can't be multiplied :( ");
    }
    else
    {
        int res[m][q]; // declared resultant matrix (after multiply) of (m x q)
        int cr = n;    // cr = column row (n OR p)
        // loop for multiplying two matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < cr; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        // loop for printing the resultant matrix
        printf("\nOn multiplying above two matrices , we get : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
