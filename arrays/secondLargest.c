#include<stdio.h>
#include<limits.h>
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
    int max = INT_MIN;
    for(int i=1;i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=1;i<n; i++){
        if(arr[i] != max && arr[i] >= smax){
            smax = arr[i];
        }
    }
    printf("The second maximum element in the given arrays is : %d",smax);
    return 0 ;
}

// #include<stdio.h>
 
// int main()
// {
//     printf("%d", 0>INT_MIN);
//     return 0 ;
// }
