#include<stdio.h>

int main()
{
    int num ;
    printf("Enter any integer :");
    scanf("%d",&num);
    // if(num >= 0){
    //     printf("The absolute value is %d",num);
    // }
    // else{
    //     printf("The absolute value is %d", -(num));
    // }

    if(num<0){
        num = -(num);
    }

    printf("The absolute value is %d",num);
    return 0;
}