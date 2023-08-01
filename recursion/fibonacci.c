// program to calculate the nth fibonacci number using recursion
#include <stdio.h>
int fibonacci(int term)
{
    if (term == 1 || term == 2)
        return 1;
    return fibonacci(term - 1) + fibonacci(term - 2);
}
int main()
{
    int t;
    printf("Enter the term you want to calculate : ");
    scanf("%d", &t);
    int ans = fibonacci(t);
    printf("%d", ans);
    return 0;
}
