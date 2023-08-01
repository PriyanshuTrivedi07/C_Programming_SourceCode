// program to reverse array without using another array
#include<stdio.h>
void revArray(int arr[], int si, int ei){
    for(int i=si,j=ei; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j]; 
        arr[j] = temp;
    }
    return;
}
int main()
{
    int size ;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the element no. %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    revArray(arr,1,size-1);
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}
