// GP : 3 12 48 ....
// Here , a = 3 and every term is four times the previous term 

#include<stdio.h>
 
int main()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int a = 3;
    for(int i = 1; i <= n; i++){
        printf("%d ", a);
        a = a*4;
    }
    return 0 ;
}
