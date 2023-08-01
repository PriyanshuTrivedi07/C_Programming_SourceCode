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
    printf("The reverse is : %d\n", rev_num);
    int sum = n + rev_num;
    printf("The sum of number with its reverse is %d\n",sum);
    
    return 0 ;
}
