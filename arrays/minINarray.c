#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements of array : ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i=1;i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("The minimum element in the given arrays is : %d",min);
    return 0 ;
}
