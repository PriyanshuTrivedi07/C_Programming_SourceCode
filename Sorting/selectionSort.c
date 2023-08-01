#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the size of n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    // loop for taking array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    printf("Sorted Array is : \n");
    for (int i = 0; i < n - 1; i++) // no. of passes
    {
        int min = INT_MAX;
        int index_of_min = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index_of_min = j;
            }
        }
        // swap
        int temp = arr[index_of_min];
        arr[index_of_min] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// bool flag = true; // denoting our array is sorted
// if(flag == true) break;
// flag = false;