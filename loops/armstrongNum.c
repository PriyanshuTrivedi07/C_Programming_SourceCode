#include<stdio.h>
 
int main()
{
    // int n = 1;
    // int k = n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    for(int i=1; i<=500; i++){
        int sum = 0;
        int temp = i;
        while(temp!=0){
            int lstdigit = temp%10;
            sum = sum + (lstdigit*lstdigit*lstdigit);
            temp = temp/10;
        }
        if(sum == i){
            printf("%d is an armstrong number \n\n", sum);
        }
    }

    // printf("%d\n", sum);

    // printf("%d\n", n);
    // printf("%d\n", k);
    return 0 ;
}
