#include <stdio.h>
int powerlog(int base, int power)
{
    if (power == 0)
        return 1;
        int x = powerlog(base,power/2);
    if (power % 2 == 0)
    {
        return x*x;
    }
    else{
        return x*x*base;
    }
}
int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d", &a);
    int b;
    printf("Enter power : ");
    scanf("%d", &b);
    int ans = powerlog(a, b);
    printf("%d", ans);
    return 0;
}
