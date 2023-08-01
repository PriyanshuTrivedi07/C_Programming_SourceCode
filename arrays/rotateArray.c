// program to rotate array by given value of 'k'
#include <stdio.h>
void revArray(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element no. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter a value by which you want to rotate the array : ");
    scanf("%d",&k);
    k = k%size;
    revArray(arr, 0, size - 1);
    revArray(arr, 0, k-1);
    revArray(arr, k, size-1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
