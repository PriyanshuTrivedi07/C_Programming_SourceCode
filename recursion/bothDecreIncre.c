// to print both decreasing - increasing
#include<stdio.h>

void decreIncre(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreIncre(n-1);
    printf("%d\n",n);
    return;
}
 
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    decreIncre(n);
    return 0 ;
}
