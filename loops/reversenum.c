#include<stdio.h>
 
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);
    int rev_num = 0;
    while(n!=0){
        rev_num = rev_num * 10 ;
        rev_num = rev_num + (n%10);
        n = n/10;
    }

    printf("The reverse is : %d", rev_num);
    return 0 ;
}
