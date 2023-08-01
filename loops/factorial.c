#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int fact = 1;
    for(int i = n; i >= 1; i--){
        fact = fact * i;
    }
    if(n == 0){
        printf("The factorial of 0 is 1");
    }
    else{
        printf("The factorial of %d is %d", n, fact);
    }
    return 0 ;
}
