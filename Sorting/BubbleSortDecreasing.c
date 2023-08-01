#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your array : ");
    //loop for taking array input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //Bubble sort for decreasing sorting
    printf("Your Array in Decreasing Order : \n");
    for(int i=0;i<n-1;i++){ //no. of passes
        bool flag = true; //denoting our array is sorted
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]<arr[j+1]){ // leftSide element > rightSide Elements
                //swap
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        } 
        if(flag == true) break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}