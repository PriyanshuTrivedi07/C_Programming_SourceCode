#include<stdio.h>
void decreasing(int n){
    // METHOD 1 : 
    // if(n>=1) printf("Good Morning\n");
    // decreasing(n-1);

    // METHOD 2 : 
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    decreasing(n);
    return 0 ;
}
