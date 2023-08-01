// program to find the total no. of triplets in the array whose sum is equal to the given value of x
#include <stdio.h>

int main()
{
    int n, size;
    printf("Enter the size of your array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element' no. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter a number : ");
    scanf("%d", &n);
// (1,3,8) (1,4,7) (1,5,6) (2,3,7) (2,4,6) (2,5,5) (3,4,5)
    int totaltriplets = 0; // initially total no. of triplets is 0
    printf("The triplets are : ");
    for (int i = 0; i < size; i++) // loop goes from 0 to (size of array - 1)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    totaltriplets++; // if the sum of elements is n then increment totaltriplets....
                    printf("(%d,%d,%d) ", arr[i], arr[j], arr[k]); // print that pair
                }
            }
        }
    }
    printf("\nThe total no. of triplets whose element's sum is %d are %d", n, totaltriplets);
    return 0;
}