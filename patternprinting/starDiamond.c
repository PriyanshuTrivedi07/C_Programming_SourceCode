#include<stdio.h>
 
int main()
{
    int n; 
    printf("Enter any odd number : ");
    scanf("%d",&n);
//Method 1 : 
    // int half_of_n = (n+1)/2;
    // int a  = 1;
    // int d = n-2;
    // for(int i=1; i<=n; i++){
    //     if(i<=half_of_n){
    //         for(int j=1; j<=half_of_n-i; j++){
    //             printf("  ");
    //         }
    //         for(int k=1; k<=a; k++){
    //             printf("* ");
    //         }
    //         a = a+2;  
    //     }

    //     else{
    //         for(int j=1; j<=i-half_of_n; j++){
    //             printf("  ");
    //         }
    //         for(int k=1; k<=d; k++){
    //             printf("* ");
    //         }
    //         d = d-2;
    //     }

    //     printf("\n");
    // }

//Method 2 : 

    int nsp = n/2; // no. of spaces
    int nst = 1; // no. of stars
    int ml = (n/2)+1; // middle line
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }
        for(int k=1; k<=nst; k++){
            printf("* ");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0 ;
}
