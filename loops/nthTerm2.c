// AP : 4,7,10,13,.....
// nth term = An = a+(n-1)d 

#include<stdio.h>
 
int main()
{
    int term ;
    printf("Enter a number : ");
    scanf("%d", &term);
    for(int i = 4; i<= (3*term + 1); i=i+3){
        printf("%d ", i);
    }
    return 0 ;
}
