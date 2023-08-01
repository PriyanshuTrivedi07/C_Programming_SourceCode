#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n!=0){
        int lstDigit = n%10;
        if(lstDigit%2 == 0){
            sum = sum + lstDigit;
        }
        n = n/10;
    }
    printf("the sum of digits is %d", sum);
    return 0 ;
}
