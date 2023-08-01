#include<stdio.h>
 
int main()
{
    int n; 
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n-i; j++){ //loop for printing spaces in starting
            printf("  "); 
        }
        int d = 65;
        for(int k=1; k<=i; k++){ // loop for printing first pyramid in which the number are incresing ......
            printf("%c ", d);
            d++;
        }

        int a = 63+i; // the value of 'a' is reset after every iteration of i
        for(int l=1; l<=i-1; l++){ // loop to print the pyramid of decresing numbers adjacent to the first pyramid
            printf("%c ", a);
            a = a-1;
        }

        printf("\n");
    }
    return 0 ;
}
