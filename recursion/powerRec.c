// program to print the 'a raised to the power b' using recursion

#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int main()
{
    int a;
    printf("If you want to find a raised to the power b\n");
    printf("Enter Base : ");
    scanf("%d", &a);
    int b;
    printf("Enter power : ");
    scanf("%d", &b);
    int ans = power(a, b);
    printf("%d raised to the power %d is : %d", a, b, ans);
    return 0;
}
