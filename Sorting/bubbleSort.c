// Sorting the array in ascending order
// Sorting the array in ascending order

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 5;
    int arr[5] = {1, 4, 3, 2, 5}; // we can also take array as input from user
    // Bubble sort (not optimised)
    //  for(int i=0;i<n-1;i++){ //no. of passes
    //      for(int j=0;j<=n-2-i;j++){
    //          if(arr[j]>arr[j+1]){ // leftSide element > rightSide Elements
    //              //swap
    //              int temp = arr[j+1];
    //              arr[j+1] = arr[j];
    //              arr[j] = temp;
    //          }
    //      }
    //  }//time complexity : O(n*n)
    //  for(int i=0;i<n;i++){
    //      printf("%d ",arr[i]);
    //  }

    // to optimise this code : we can check if the array before every pass is already sorted or not (using 'bool' type checkmark)
    for (int i = 0; i < n - 1; i++) // no. of passes
    {                     
        bool flag = true; // denoting our array is sorted
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1]) // leftSide element > rightSide Elements
            { 
                // swap
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}