#include<stdio.h>

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0){

        if(n % 15 != 0){
            printf("the number is divisible by 5 or 3 but not by 15.");
        }
        else{
            printf("Divisible by 5 or 3 or 15");
        }
    }
    else{
        printf("Not divisible by 5 or 3");
    }
    return 0;
}