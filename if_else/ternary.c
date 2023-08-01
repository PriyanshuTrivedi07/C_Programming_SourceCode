//ternary operator is used to write the if-else in one line
// syntax :
//         expression 1 ? expression 2 : expression 3 
//  exp1 = conditional statement
//  exp2 = statement which executes if condition is True
//  exp3 = statement which executes if condition is False

#include<stdio.h>

int main()
{
    // to find even or odd
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);
    // using ternary operator 
    n%2 == 0 ? printf("Even number") : printf("Odd number") ;
    return 0;
}