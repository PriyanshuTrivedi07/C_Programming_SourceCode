// 1
// 1 2 1
// 1 3 3  1
// 1 4 6  4  1
// 1 5 10 10 5  1


#include<stdio.h>

//fuction prototypes 
int fact(int a);
int combi(int n, int r);

int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    int nsp = n-1;
    for(int i=0; i<n; i++){
        for(int i=1; i<=nsp; i++){
            printf("  ");
        }
        nsp--;
        for(int j=0; j<=i; j++){
            printf("%d   ", combi(i,j));
        }
        printf("\n");
    }
    return 0 ;
}

//fuction to find factorial of a number 
int fact(int a){
    int fact = 1;
    for(int i=2; i<=a; i++){
        fact = fact*i;
    }
    return fact;
}

// fuction to find combination of two given numbers 
int combi(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
