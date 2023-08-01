// #include<stdio.h>
// METHOD 1 : Using two parameters
// void increas(int x, int n);
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     increas(1,n);
//     return 0 ;
// }
// void increas(int x, int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     increas(x+1,n);
// }

#include <stdio.h>
// METHOD 2 : Using only one parameter
void increas(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    increas(n);
    return 0;
}
void increas(int n)
{
    if (n == 0)
        return;
    // by inter-changing below 2 lines the it prints the counting in incresing order instead of decreasing order  
    increas(n - 1);
    printf("%d\n", n);
    return;
}
