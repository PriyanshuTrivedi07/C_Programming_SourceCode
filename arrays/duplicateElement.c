#include<stdio.h>
 
int main()
{
    int arr[7] = {1,7,4,2,6,3,7};
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i] == arr[j]){
                printf("%d has a duplicate element at index %d", arr[i],j);
            }
        }
    }
    return 0 ;
}
