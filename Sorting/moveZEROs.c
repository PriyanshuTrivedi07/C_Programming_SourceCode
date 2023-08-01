//Given an integer array 'arr', move all 0's to the end of it while maintaining the relative order of the non-zero
// elements
#include<stdio.h>

int main()
{
    int arr[9] = {5,0,2,0,0,4,1,3,0};
    int brr[9];
    for(int i=0;i<9;i++){
        if(arr[i] != 0){
            arr[i] = brr[i];
        }
        else{
            
        }
    }
    return 0 ;
}