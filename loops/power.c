#include<stdio.h>
 
int main()
{
    int base, power;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter power : ");
    scanf("%d", &power);
    int product = 1;
    for(int i = 1; i <= power; i++){
        product = product * base;
    }
    printf("%d raised to the power %d is = %d", base, power, product);
    return 0 ;
}
