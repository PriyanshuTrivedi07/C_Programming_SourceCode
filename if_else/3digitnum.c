#include<stdio.h>

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n > 99 && n < 1000){
        printf("Yes , it's a three digit number");
    }
    else{
        printf("NO , it's not a three digit number");
    }
    return 0;
}