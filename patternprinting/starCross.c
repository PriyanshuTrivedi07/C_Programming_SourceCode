#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter any odd number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i==(n+1)-j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0 ;
}
