#include<stdio.h>

int main()
{
    int a , b , c;
    printf("Enter first side of triangle : ");
    scanf("%d", &a);
    printf("Enter second side of triangle : ");
    scanf("%d", &b);
    printf("Enter third side of triangle : ");
    scanf("%d", &c);

    if(a+b > c && b+c > a && c+a > b){
        printf("yes , these side can form a triangle.");
    }
    else{
        printf("No , these side can form a triangle.");
    }

    return 0;
}