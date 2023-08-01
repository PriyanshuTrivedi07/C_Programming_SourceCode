// program to print the sum of 1-n numbers
// METHOD 1 : using two parameters

/* #include <stdio.h>
void sum(int n, int s)
{
    if (n == 0)
    {
        printf("%d",s);
        return;
    }
    sum(n - 1, s + n); // here 2nd parameter stores the sum
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    sum(n, 0);
    return 0;
} */

// METHOD 2 : using return type
#include <stdio.h>
int sum(int n)
{ 
    if (n==1 || n==0) return n;
    int ans = n + sum(n - 1);
    return ans;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int ans = sum(n);
    printf("%d",ans);
    return 0;
}
