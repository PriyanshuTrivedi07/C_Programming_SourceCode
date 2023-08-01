// program to check if the given array is palindrom or not
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    // loop for taking array as input from user
    for (int i = 0; i < size; i++)
    {
        printf("Enter element no. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // loop for printing the entered array
    printf("your Array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    int lst_index = size - 1;
    for (int i = 0; i <= size; i++)
    {
        if(arr[i] != arr[lst_index-i]){
            printf("The array is not a palindrom array. ");
            break;
        }
        else{
            printf("yes");
        }
    }
    

    return 0;
}