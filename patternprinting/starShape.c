// *******
// *** ***                  <--  if the input is 4 
// **   **
// *     *

#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n-1;
    for(int i=1; i<=2*n-1; i++){
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=n-1; i++){
        //loop for printing Stars
        for(int j=1; j<=nst; j++){
            printf("*");
        }
        
        // loop for printing spaces
        for(int k=1; k<=nsp; k++){
            printf(" ");
        }

        //loop for printing Stars again
        for(int j=1; j<=nst; j++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0 ;
}
