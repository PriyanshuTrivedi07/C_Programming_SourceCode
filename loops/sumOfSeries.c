#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

// 1 + 2 + 3 + 4 + 5 ..... nth terms
    // int sum = 0 ;
    // for(int i = 1; i<=n; i++){
    //     sum = sum + i;
    // }
    // printf("%d",sum);

// 1 - 2 + 3 - 4 + 5 - 6 + ..... nth terms
// Method 1 : 
    // int even_sum = 0 , odd_sum = 0 ;
    // for(int i = 0; i <= n; i++){
    //     if(i % 2 == 0){
    //         even_sum = even_sum + i;
    //     }
    //     else {
    //         odd_sum = odd_sum + i;
    //     }
    // }
    // printf("The sum of the series is : %d", (odd_sum - even_sum));

// Method 2 (using Maths formula) :
    int sum = 0 ;
    if(n % 2 == 0) {
        sum = -n/2;
    }
    else{
        sum = -n/2 + n ;
    }
    printf("The sum of the series is : %d", sum);
    return 0 ;
}
