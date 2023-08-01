// AP : 100, 97, 94, .....
// here, a = 100 and d = -3

#include<stdio.h>
 
int main()
{
    int term ;
    printf("Enter a number : ");
    scanf("%d", &term);
    for(int i = 1; i<= 2*term-1; i=i+2){
        printf("%d ", i);
    }
    return 0 ;
}
