//program to reverse array with using another array
#include<stdio.h>
 
int main()
{   
    int n = 5;
    int arr[5] = {2,02,0,54,2};
    int brr[5];
    for(int i=0; i<5; i++){
        brr[i] = arr[4-i];
    }
    for(int i = 0; i<5; i++){
        printf("%d ", brr[i]);
    }
    // int n = 4;
    // int m = 5;
    // int arr[2] = {n,m};
    // for(int i = 0; i<2; i++){
    //     printf("%d ", arr[i]);
    // }
    return 0 ;
}
