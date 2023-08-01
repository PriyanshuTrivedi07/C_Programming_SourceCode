// program to find the total no. of pairs in the array whose sum is equal to the given value of x
#include <stdio.h>

int main()
{
    int n, size;
    printf("Enter the size of your array : ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter element' no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a number : ");
    scanf("%d", &n);

    int totalpairs = 0; //initially total no. of pair is 0
    printf("The Pairs are : ");
    for (int i = 0; i < size; i++) //loop goes from 0 to (size of array - 1) 
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == n)
            {
                totalpairs++; // if the sum of elements is n then increment totalpairs....
                printf("(%d,%d) ", arr[i], arr[j]); // print that pair
            }
        }
    }
    printf("\nThe total no. of pairs whose element's sum is %d are %d", n, totalpairs);
    return 0;
}
