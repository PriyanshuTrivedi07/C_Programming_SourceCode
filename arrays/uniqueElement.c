//find the unique number in a given array where all elements are being repeated twice with one value being unique
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {1,2,3,5,3,2,1};
    for(int i=0; i<7; i++){
        bool flag = false;  // not present
        for(int j=i+1; j<7; j++){
            if(arr[i] == arr[j]){
                flag = true;
            }
        }
        if(flag == false){
            printf("%d is a unique number.\n", arr[i]);
            break;
        }
        
    }
    return 0 ;
}
