// WAP to rotate a (nxn) matrix 90(degree) clockwise
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the (%dx%d) matrix : \n", n, n);

    // loop for taking matrix input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // loop to transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) // to transpose the matrix - (j goes from i to n-1) OR (j goes from 0 to i)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // printing output after transpose
    printf("\nThe matrix after transposing is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //loop for rotate
    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    //printing output after rotating
    printf("\nThe matrix after rotating is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
