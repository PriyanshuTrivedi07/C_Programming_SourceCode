#include<stdio.h>
int fact(int a);
int combi(int n, int r);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int r;
    printf("Enter r : ");
    scanf("%d", &r);

    // int nfact = fact(n); // n!
    // int rfact = fact(r); // r!
    // int nrfact = fact(n-r); // (n-r)!

    int ncr = combi(n,r);
    printf("The value of nCr = %d", ncr);
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
