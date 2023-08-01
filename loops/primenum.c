#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
// 1st Method : 
    // int count = 0;
    // for(int i = 1; i<=n; i++){
    //     if(n % i == 0){
    //         count++;
    //     }
        
    // }
    // if(count > 2){
    //         printf("COMPOSITE NUMBER.");
    //     }
    //     else{
    //         printf("PRIME NUMBER.");
    //     }

// 2nd Method : 
    int count = 0;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            count = 1;
            break;
        }
    }
    if(n == 1) printf("1 is neither prime not composite ");
    else if(count == 1) printf("COMPOSITE NUMBER ");
    else printf("PRIME NUMBER");

    return 0 ;
}
