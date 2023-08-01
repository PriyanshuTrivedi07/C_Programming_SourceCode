// 1
// 0 1                      <-- if the input is 4
// 1 0 1
// 0 1 0 1

#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        // int a = 1;
        for(int j=1; j<=i; j++){
            int sum = i+j;
            if(sum%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0 ;
}

