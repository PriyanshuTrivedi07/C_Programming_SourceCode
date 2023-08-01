//       *
//     * * *                if input = 4 ;
//   * * * * *  
// * * * * * * *


#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d", &n);
    int a = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ // to print spaces
            printf("  ");
        }
        
        for(int k=1; k<=a; k++){ //to print the stars   // here we can also use (2*n)-1 instead of using new variable
            printf("* ");
        }
        a = a+2; // because no. of stars incresed by 2 in each line 
        printf("\n");
    }
    return 0 ;
}

