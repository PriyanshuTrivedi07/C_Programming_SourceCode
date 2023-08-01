#include<stdio.h>
 
int main()
{
    int arr[5] = {2,8,3,1,9};  //here we can also take array as input from user 
    int n;
    printf("Enter the number to compare elements : ");
    scanf("%d",&n);
    int count = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>n){
            count++;
        }
    }
    printf("The no. of elements which is greater than %d are %d", n,count);
    return 0 ;
}
