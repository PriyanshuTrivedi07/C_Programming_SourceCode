#include<stdio.h>
 
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    int temp = a; 
    a = b; 
    b = temp;
    printf("After swapping.....\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0 ;
}
