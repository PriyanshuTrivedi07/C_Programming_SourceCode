#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter a no. of lines : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i*2; j++){
            if(j%2!=0){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0 ;
}
