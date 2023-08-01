// Given an array of integers with 1 to n elements and the size of array is n+1. One element is occuring more than once i.e duplicate number is present . Find the duplicate element

#include<stdio.h>

int main()
{
    // METHOD 1 : This method is efficient in terms of space but not efficient in terms of time
    // int arr[7] = {1,2,3,4,5,6,5}; //we can also take array as input from user
    // for(int i=0;i<6;i++){
    //     for(int j=i+1;j<7;j++){
    //         if(arr[i] == arr[j]){
    //             printf("%d\n", arr[i]);
    //             break;
    //         }
    //     }
    // }

    // METHOD 2 : This method is efficient in terms of time but not efficient in terms of space
    // int arr[11] = {2,6,7,3,1,5,4,8,2,9,10};
    // int brr[11]; //visited array
    // for(int i=0;i<11;i++){
    //     brr[i] = 0;
    // }
    // for(int i=0;i<11;i++){
    //     if(brr[(arr[i])] == 0){
    //         brr[(arr[i])] = 1;
    //     }
    //     else if (brr[(arr[i])] == 1){
    //         printf("%d",arr[i]);
    //         break;
    //     }
    // }


    //METHOD 3 : This method is efficient in terms of time & space both
    int n = 10;
    int arr[10+1] = {2,6,7,3,1,1,4,8,5,9,10};
    int sum_upto_n =  (n*(n+1))/2;
    int arr_sum = 0;
    for(int i=0;i<n+1;i++){
        arr_sum = arr_sum + arr[i];
    }
    printf("%d", arr_sum - sum_upto_n);
 
    return 0 ;
}