//if input is 1 -->   111
//if input is 2 -->   211121112
//if input is 1 -->   321112111232111211123

#include<stdio.h>
void zigzag(int n){
    if(n==0) return;
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    zigzag(n);
    return 0 ;
}