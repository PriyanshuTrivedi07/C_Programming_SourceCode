#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);
    return 0;
}