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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}
